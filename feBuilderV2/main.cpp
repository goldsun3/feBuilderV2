#include "pch.h"

LPCWSTR g_szClassName{ L"My Window Class" };

void UpdateListViewStats			(HWND listviewstats, std::vector<Stat>* characterstats);
void UpdateANDAugmentListViewStats	(HWND listviewstats, std::vector<Stat>* characterstats, Class* cLass);
void UpdateListViewWeaponStats		(HWND listviewweaponstats, Weapon* weapon);
std::wstring CompareStats			(std::wstring chartext, std::wstring classtext);
void UpdateListBoxWeapons			(HWND listboxweapons, HWND dropdownweapontypes, WeaponList weaponlist);
void UpdateListViewTotalStats		(HWND hwnd, std::vector<Stat>* characterstats, Weapon* weapon, std::vector<ClassStats>* classstats);

LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
	std::unique_ptr<Class>						cLass(new Class);
	std::unique_ptr<Weapon>						weapon(new Weapon);
	std::unique_ptr<std::vector<Stat>>			charstats(new std::vector<Stat>);
	static std::unique_ptr<std::vector<Stat>>	charmoddedbyclassstats(new std::vector<Stat>);

	switch (msg) {

		case WM_CREATE: {
			CharacterList characterlist;

			ListBoxCharNames listboxcharnames;
			listboxcharnames.Construct(hwnd);
			listboxcharnames.SetCharacterList(characterlist, hwnd);

			ClassList classlist;

			ListBoxClasses listboxclasses;
			listboxclasses.Construct(hwnd);
			listboxclasses.SetClassList(classlist);

			WeaponList weaponlist;

			ListBoxWeapons listboxweapons;
			listboxweapons.Construct(hwnd);
			listboxweapons.SetWeaponList(weaponlist);

			ButtonClassBaseStats bcbas;
			bcbas.Construct(hwnd);

			ButtonClassBoostedStats bcbos;
			bcbos.Construct(hwnd);

			WeaponTypeList weapontypelist;

			DropDownWeaponTypes dropdownweapontypes;
			dropdownweapontypes.Construct(hwnd);
			dropdownweapontypes.SetWeaponTypes(weapontypelist);

			ListViewStats listviewstats;
			listviewstats.Construct(hwnd);
			listviewstats.SetColumns(hwnd);
			listviewstats.SetColumnSpacing();

			ListViewWeaponStats listviewweaponstats;
			listviewweaponstats.Construct(hwnd);
			listviewweaponstats.SetColumns(hwnd);
			listviewweaponstats.SetColumnSpacing();

			ListViewTotalStats listviewtotalstats;
			listviewtotalstats.Construct(hwnd);
			listviewtotalstats.SetColumns(hwnd);
			listviewtotalstats.SetColumnSpacing();

			break;
		}

		case WM_COMMAND: {
			charmoddedbyclassstats->clear();
			switch (LOWORD(wParam)) {
				case IDC_MAIN_LBCN: {
					switch (HIWORD(wParam)) {
						case LBN_SELCHANGE: {
							CharacterList characterlist;
							HWND listboxcharnames = GetDlgItem(hwnd, IDC_MAIN_LBCN);
							charstats = characterlist.getSelStudStats(listboxcharnames);
							ListBox_SetCurSel(GetDlgItem(hwnd, IDC_MAIN_LBW), -1);
							ListBox_SetCurSel(GetDlgItem(hwnd, IDC_MAIN_LBC), -1);
							HWND listviewstats = GetDlgItem(hwnd, IDC_MAIN_LV);
							UpdateListViewStats(listviewstats, charstats.get());

							break;
						}
					}
					break;
				}

				case IDC_MAIN_LBC: {
					switch (HIWORD(wParam)) {
						case LBN_SELCHANGE: {		
							if (ListBox_GetCurSel(GetDlgItem(hwnd, IDC_MAIN_LBCN)) != LB_ERR) {
								HWND listboxcharnames = GetDlgItem(hwnd, IDC_MAIN_LBCN);

								CharacterList characterlist;
								charstats = characterlist.getSelStudStats(listboxcharnames);

								ClassList classlist;
								HWND listboxclasses = GetDlgItem(hwnd, IDC_MAIN_LBC);

								cLass = classlist.getSelClass(hwnd, listboxclasses);

								HWND listviewstats = GetDlgItem(hwnd, IDC_MAIN_LV);

								if (cLass->getBase() == true) {
									LVITEM itemTemp;
									itemTemp.mask = LVIF_TEXT;
									itemTemp.iItem = 0;
								}
								UpdateANDAugmentListViewStats(listviewstats, charstats.get(), cLass.get());
							}

							break;
						}
					}

					break;
				}

				case IDC_MAIN_LBW: {
					switch (HIWORD(wParam)) {
						case LBN_SELCHANGE: {
							HWND listboxweapons = GetDlgItem(hwnd, IDC_MAIN_LBW);

							WeaponList weaponlist;
							weapon = weaponlist.getSelWeapon(listboxweapons);

							HWND listviewweaponstats = GetDlgItem(hwnd, IDC_MAIN_LVW);
							UpdateListViewWeaponStats(listviewweaponstats, weapon.get());

							break;
						}
					}

					break;
				}

				case IDC_MAIN_DDWT: {
					switch (HIWORD(wParam)) {
						case CBN_SELCHANGE: {
								WeaponList weaponlist;
								HWND listboxweapons = GetDlgItem(hwnd, IDC_MAIN_LBW);
								HWND dropdownweapontypes = GetDlgItem(hwnd, IDC_MAIN_DDWT);

								UpdateListBoxWeapons(listboxweapons, dropdownweapontypes, weaponlist);

							break;
						}
					}
				
					break;
				}
			}
		}	

		case WM_NOTIFY: {
			switch (LOWORD(wParam)) {
				case IDC_MAIN_LV: {
					LPNMLVCUSTOMDRAW lpNMCustomDraw = (LPNMLVCUSTOMDRAW)lParam;
					DWORD dwDRAWSTAGE = lpNMCustomDraw->nmcd.dwDrawStage;
					switch (dwDRAWSTAGE) {
						case CDDS_PREPAINT: {
							return CDRF_NOTIFYITEMDRAW;
						}

						case CDDS_ITEMPREPAINT: {
							return CDRF_NOTIFYSUBITEMDRAW;
						}

						case CDDS_SUBITEM | CDDS_ITEMPREPAINT: {
							if (!charmoddedbyclassstats->empty()) {
								if (charmoddedbyclassstats->at(lpNMCustomDraw->iSubItem).getBase() == true) {
									lpNMCustomDraw->clrTextBk = COLORREF(RGB(0, 255, 0));
								}
								else {
									lpNMCustomDraw->clrTextBk = COLORREF(GetSysColor(COLOR_WINDOW));
								}
							}

							return CDRF_NEWFONT;
						}
					}
			
					break;
				}
			}

			return DefWindowProc(hwnd, msg, wParam, lParam);
		}

		case WM_SIZE: {
			HWND hListBox;
			RECT rcClient;

			GetClientRect(hwnd, &rcClient);

			hListBox = GetDlgItem(hwnd, IDC_MAIN_CB);
			SetWindowPos(hListBox, NULL, 0, 0, rcClient.right, rcClient.bottom, SWP_NOZORDER);

			break;
		}

		case WM_CLOSE: {
			DestroyWindow(hwnd);
			break;
		}

		case WM_DESTROY: {
			PostQuitMessage(0);
			break;
		}

		default: {
			return DefWindowProc(hwnd, msg, wParam, lParam);
		}
	}
	return TRUE;
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
	LPSTR lpCmdLine, int nCmdShow)
{
	WNDCLASSEX wc;
	HWND hwnd;
	MSG Msg;

	wc.cbSize = sizeof(WNDCLASSEX);
	wc.style = 0;
	wc.lpfnWndProc = WndProc;
	wc.cbClsExtra = 0;
	wc.cbWndExtra = 0;
	wc.hInstance = hInstance;
	wc.hIcon = (HICON)LoadImage(hInstance, MAKEINTRESOURCE(IDI_ICON1), IMAGE_ICON, 32, 32, 0);
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);
	wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
	wc.lpszMenuName = MAKEINTRESOURCE(IDR_MENU1);
	wc.lpszClassName = g_szClassName;
	wc.hIconSm = (HICON)LoadImage(hInstance, MAKEINTRESOURCE(IDI_ICON1), IMAGE_ICON, 32, 32, 0);

	INITCOMMONCONTROLSEX icc;
	icc.dwSize = sizeof(icc);
	icc.dwICC = ICC_LISTVIEW_CLASSES;

	if (!InitCommonControlsEx(&icc)) {
		MessageBox(NULL, L"Windows registration failed!", L"Common Controls ERROR!",
			MB_ICONEXCLAMATION | MB_OK);
	}

	if (!RegisterClassEx(&wc)) {
		MessageBox(NULL, L"Windows registration failed!", L"Main Window ERROR!",
			MB_ICONEXCLAMATION | MB_OK);
	}

	hwnd = CreateWindowEx(
		WS_EX_WINDOWEDGE,
		g_szClassName,
		L"The title of my window",
		WS_CLIPCHILDREN | WS_SYSMENU,
		CW_USEDEFAULT, CW_USEDEFAULT, 1200, 600,
		NULL, NULL, hInstance, NULL);

	if (hwnd == NULL) {
		MessageBox(NULL, L"Windows registration failed!", L"Error!",
			MB_ICONEXCLAMATION | MB_OK);
	}

	ShowWindow(hwnd, nCmdShow);
	UpdateWindow(hwnd);

	while (GetMessage(&Msg, NULL, 0, 0) > 0) {
		TranslateMessage(&Msg);
		DispatchMessage(&Msg);
	}

	return Msg.wParam;
}

void UpdateListViewStats(HWND listviewstats, std::vector<Stat>* characterstats) {
	LVITEM itemTemp;
	itemTemp.mask = LVIF_TEXT;
	itemTemp.iItem = 0;
	std::wstring initbuffer = characterstats->at(0).getStat();
	LPWSTR finalbuffer = &initbuffer[0];

	itemTemp.pszText = finalbuffer;
	ListView_InsertItem(listviewstats, &itemTemp);

	for (int col = 0; col < C_LVS; col++) {
		initbuffer = characterstats->at(col).getStat();
		finalbuffer = &initbuffer[0];

		itemTemp.pszText = finalbuffer;
		itemTemp.iSubItem = col;

		ListView_SetItemText(listviewstats, 0, col, finalbuffer);
	}

	GetDlgItem(GetParent(listviewstats), IDC_MAIN_LVTS);
	UpdateListViewTotalStats(GetDlgItem(GetParent(listviewstats), IDC_MAIN_LVTS), characterstats, nullptr, nullptr);
}

void UpdateANDAugmentListViewStats(HWND listviewstats, std::vector<Stat>* characterstats, Class* cLass) {
	if (cLass->getBase() == true) {
		LVITEM itemTemp;
		itemTemp.mask = LVIF_TEXT;
		itemTemp.iItem = 0;

		std::wstring characterstat = characterstats->at(0).getStat();
		std::wstring classstat = cLass->getAllStats().at(0).getStat();
		std::wstring greaterStat = CompareStats(characterstat, classstat);

		for (int col = 1; col < C_LVS; col++) {
			classstat = cLass->getAllStats().at(col).getStat();
			characterstat = characterstats->at(col).getStat();
			greaterStat = CompareStats(characterstat, classstat);
		}

		GetDlgItem(GetParent(listviewstats), IDC_MAIN_LVTS);
		UpdateListViewTotalStats(GetDlgItem(GetParent(listviewstats), IDC_MAIN_LVTS), characterstats, nullptr, classstats);
	}

	else if (cLass->getBase() == false) {
		LVITEM itemTemp;
		itemTemp.mask = LVIF_TEXT;
		itemTemp.iItem = 0;

		std::wstring characterstat = characterstats->at(0).getStat();
		std::wstring classstat = cLass->getAllStats().at(0).getStat();
		std::wstring initbuffer = characterstat + L" + " + classstat;
		LPWSTR finalbuffer = &initbuffer[0];

		itemTemp.pszText = finalbuffer;
		ListView_InsertItem(listviewstats, &itemTemp);

		for (int col = 0; col < C_LVS; col++) {
			characterstat = characterstats->at(col).getStat();
			classstat = cLass->getAllStats().at(col).getStat();
			initbuffer = characterstat + L" + " + classstat;
			finalbuffer = &initbuffer[0];

			ListView_SetItemText(listviewstats, 0, col, finalbuffer);
		}
	}
}

void UpdateListViewWeaponStats(HWND listviewweaponstats, Weapon* weapon) {
	LVITEM itemTemp;
	itemTemp.mask = LVIF_TEXT;
	itemTemp.iItem = 0;
	std::wstring initbuffer = weapon->getAllStats().at(0).getStat();
	LPWSTR finalbuffer = &initbuffer[0];

	itemTemp.pszText = finalbuffer;
	ListView_InsertItem(listviewweaponstats, &itemTemp);

	for (int col = 0; col < C_LVWS; col++) {
		initbuffer = weapon->getAllStats().at(col).getStat();
		finalbuffer = &initbuffer[0];

		ListView_SetItemText(listviewweaponstats, 0, col, finalbuffer);
	}

	GetDlgItem(GetParent(listviewweaponstats), IDC_MAIN_LVTS);
	UpdateListViewTotalStats(GetDlgItem(GetParent(listviewweaponstats), IDC_MAIN_LVTS), nullptr, weapon, nullptr);
}
std::wstring CompareStats(std::wstring chartext, std::wstring classtext) {
	int string1 = std::stoi(chartext);
	int string2 = std::stoi(classtext);
	if (string1 < string2) {
		return classtext;
	}
	return chartext;
}

void UpdateListBoxWeapons(HWND listboxweapons, HWND dropdownweapontypes, WeaponList weaponlist){
	ListBox_ResetContent (listboxweapons);

	const wchar_t* bufferDDWTSel = new const wchar_t[ComboBox_GetLBTextLen(dropdownweapontypes, ComboBox_GetCurSel(dropdownweapontypes))];
	ComboBox_GetLBText(dropdownweapontypes, ComboBox_GetCurSel(dropdownweapontypes), bufferDDWTSel);  //get weapon name that's selected

	if (wcscmp(bufferDDWTSel, L"ALL") == 0){
		for (int index = 0; index < weaponlist.getSize (); index++) {				//go through the listbox with weapon names
			std::wstring weaponname = weaponlist.getWeapon (index).getName ();
			LPCTSTR wordtoinsert = &weaponname [0];
			int error = ListBox_AddString (listboxweapons, wordtoinsert);

		}
	}
	else{
		for (int index = 0; index < weaponlist.getSize(); index++) {				//go through the listbox with weapon names
		
			std::wstring weapontype = weaponlist.getWeapon(index).getWeaponType();  //load up weapon from listbox that matches index 

			if (weapontype.compare(bufferDDWTSel) == 0) {
				std::wstring weaponname = weaponlist.getWeapon(index).getName();
				LPCTSTR wordtoinsert = &weaponname[0];
				int error = ListBox_AddString(listboxweapons, wordtoinsert);
			}
		}
	}
}

void UpdateListViewTotalStats(HWND listviewtotalstats, std::vector<Stat>* characterstats, Weapon* weapon, std::vector<ClassStats>* classstats) {
	static StatCalculator statcalculator;
	statcalculator.setStats(characterstats, weapon, classstats);
	statcalculator.CalculateTotalPhysicalAttack();
	statcalculator.CalculateTotalMagicAttack();
	statcalculator.CalculateTotalPhysicalHit();
	statcalculator.CalculateTotalMagicHit();
	statcalculator.CalculateTotalCrit();
	statcalculator.CalculateAS();
	statcalculator.CalculateTotalProt();
	statcalculator.CalculateTotalResilience();
	statcalculator.CalculateTotalAvoid();
	statcalculator.CalculateTotalCritAvoid();
	statcalculator.CalculateTotalRange();

	LVITEM itemTemp;
	itemTemp.mask = LVIF_TEXT;
	itemTemp.iItem = 0;
	std::wstring initbuffer = (statcalculator.getTotalStats().getAllStats())[0].getStat();
	LPWSTR finalbuffer = &initbuffer [0];

	itemTemp.pszText = finalbuffer;
	ListView_InsertItem(listviewtotalstats, &itemTemp);

	for (int col = 0; col < C_LVTS; col++) {
		initbuffer = (statcalculator.getTotalStats().getAllStats())[col].getStat();
		finalbuffer = &initbuffer [0];

		ListView_SetItemText(listviewtotalstats, 0, col, finalbuffer);
	}
}
