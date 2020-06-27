#include "pch.h"

LPCWSTR g_szClassName{ L"My Window Class" };

//struct statMeasure {
//	std::wstring name = L"";
//	bool change = false;
//
//	statMeasure(std::wstring uName, bool uChange) {
//		name = uName;
//		change = uChange;
//	}
//	bool getChange() { return change; }
//};

void UpdateListViewStats(HWND listviewstats, Stats* stats);
void UpdateANDAugmentListViewStats(HWND listviewstats, Stats* charstats, Stats* classstats, std::vector<statMeasure>* ledger);
void UpdateListViewWeaponStats(HWND listviewweaponstats, WeaponStats* weaponstats);
bool CompareStats(std::wstring chartext, std::wstring classtext);
void UpdateListBoxWeapons(HWND listboxweapons, HWND dropdownweapontypes, WeaponList weaponlist);
void UpdateListViewTotalStats(HWND hwnd, Stats* stats, WeaponStats* weaponstats, std::vector<statMeasure>* ledger);



LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
	std::unique_ptr<Stats> charstats(new Stats);
	std::unique_ptr<Stats> classstats(new Stats);
	std::unique_ptr<WeaponStats> weaponstats(new WeaponStats);
	static std::unique_ptr<std::vector<statMeasure>> ledger (new std::vector<statMeasure>);
	switch (msg) {

		case WM_CREATE: {
			StudentList studentlist;

			ListBoxCharNames listboxcharnames;
			listboxcharnames.Construct(hwnd);
			listboxcharnames.SetRoster(studentlist, hwnd);

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
			ledger->clear();
			switch (LOWORD(wParam)) {
				case IDC_MAIN_LBCN: {
					switch (HIWORD(wParam)) {
						case LBN_SELCHANGE: {
							StudentList studentlist;
							HWND listboxcharnames = GetDlgItem(hwnd, IDC_MAIN_LBCN);
							charstats = studentlist.getSelStudStats(listboxcharnames);
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

								StudentList studentlist;
								charstats = studentlist.getSelStudStats(listboxcharnames);

								ClassList classlist;
								HWND listboxclasses = GetDlgItem(hwnd, IDC_MAIN_LBC);

								classstats = classlist.getSelClassStats(hwnd, listboxclasses);

								HWND listviewstats = GetDlgItem(hwnd, IDC_MAIN_LV);
								UpdateANDAugmentListViewStats(listviewstats, charstats.get(), classstats.get(), ledger.get());
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
							weaponstats = weaponlist.getSelWeaponStats(listboxweapons);

							HWND listviewweaponstats = GetDlgItem(hwnd, IDC_MAIN_LVW);
							UpdateListViewWeaponStats(listviewweaponstats, weaponstats.get());

							break;
						}
					}

					break;
				}

				case IDC_MAIN_DDWT: {
					switch (HIWORD(wParam)) {
						case CBN_SELCHANGE: {
							//if (ListBox_GetCurSel(GetDlgItem(hwnd, IDC_MAIN_LBW)) != LB_ERR) {
								WeaponList weaponlist;
								HWND listboxweapons = GetDlgItem(hwnd, IDC_MAIN_LBW);
								HWND dropdownweapontypes = GetDlgItem(hwnd, IDC_MAIN_DDWT);

								UpdateListBoxWeapons(listboxweapons, dropdownweapontypes, weaponlist);
							/*}*/

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
							if (!ledger->empty()) {
								if (ledger->at(lpNMCustomDraw->iSubItem).getChange() == true) {
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

void UpdateListViewStats(HWND listviewstats, Stats* stats) {
	LVITEM itemTemp;
	itemTemp.mask = LVIF_TEXT;
	itemTemp.iItem = 0;
	std::wstring initbuffer = stats->getStatText(0);
	LPWSTR finalbuffer = &initbuffer[0];

	itemTemp.pszText = finalbuffer;
	ListView_InsertItem(listviewstats, &itemTemp);

	for (int col = 0; col < C_LVS; col++) {
		initbuffer = stats->getStatText(col);
		finalbuffer = &initbuffer[0];

		itemTemp.pszText = finalbuffer;
		itemTemp.iSubItem = col;

		ListView_SetItemText(listviewstats, 0, col, finalbuffer);
	}
	GetDlgItem(GetParent(listviewstats), IDC_MAIN_LVTS);
	UpdateListViewTotalStats(GetDlgItem(GetParent(listviewstats), IDC_MAIN_LVTS), stats, nullptr, nullptr);
}
void UpdateANDAugmentListViewStats(HWND listviewstats, Stats* charstats, Stats* classstats, std::vector<statMeasure>* ledger) {
	if (classstats->getBase() == true) {
		LVITEM itemTemp;
		itemTemp.mask = LVIF_TEXT;
		itemTemp.iItem = 0;

		std::wstring chartext = charstats->getStatText(0);
		std::wstring classtext = classstats->getStatText(0);
		bool isBaseGrtr = CompareStats(chartext, classtext);

		if (isBaseGrtr) {
			std::wstring initbuffer = classtext;
			ledger->push_back(statMeasure(initbuffer, true));
			LPWSTR finalbuffer = &initbuffer[0];
			itemTemp.pszText = finalbuffer;
			ListView_InsertItem(listviewstats, &itemTemp);
		}

		else if (!isBaseGrtr) {
			std::wstring initbuffer = chartext;
			ledger->push_back(statMeasure(initbuffer, false));
			LPWSTR finalbuffer = &initbuffer[0];
			itemTemp.pszText = finalbuffer;
			ListView_InsertItem(listviewstats, &itemTemp);
		}

		for (int col = 1; col < C_LVS; col++) {
			classtext = classstats->getStatText(col);
			chartext = charstats->getStatText(col);
			bool isBaseGrtr = CompareStats(chartext, classtext);

			if (isBaseGrtr) {
				std::wstring initbuffer = classtext;
				ledger->push_back(statMeasure(initbuffer, true));
				LPWSTR finalbuffer = &initbuffer[0];

				//itemTemp.pszText = finalbuffer;
				//itemTemp.iSubItem = col;
				ListView_SetItemText(listviewstats, 0, col, finalbuffer);
			}

			else if (!isBaseGrtr) {
				std::wstring initbuffer = chartext;
				ledger->push_back(statMeasure(initbuffer, false));
				LPWSTR finalbuffer = &initbuffer[0];

				/*itemTemp.pszText = finalbuffer;
				itemTemp.iSubItem = col;*/
				ListView_SetItemText(listviewstats, 0, col, finalbuffer);

			}
		}

		GetDlgItem(GetParent(listviewstats), IDC_MAIN_LVTS);
		UpdateListViewTotalStats(GetDlgItem(GetParent(listviewstats), IDC_MAIN_LVTS), charstats, nullptr, ledger);
	}

	else if (classstats->getBase() == false) {
		LVITEM itemTemp;
		itemTemp.mask = LVIF_TEXT;
		itemTemp.iItem = 0;

		std::wstring chartext = charstats->getStatText(0);
		std::wstring classtext = classstats->getStatText(0);
		std::wstring initbuffer = chartext + L" + " + classtext;
		LPWSTR finalbuffer = &initbuffer[0];

		itemTemp.pszText = finalbuffer;
		ListView_InsertItem(listviewstats, &itemTemp);

		for (int col = 0; col < C_LVS; col++) {
			chartext = charstats->getStatText(col);
			classtext = classstats->getStatText(col);
			initbuffer = chartext + L" + " + classtext;
			finalbuffer = &initbuffer[0];

			/*itemTemp.pszText = finalbuffer;
			itemTemp.iSubItem = col;*/

			ListView_SetItemText(listviewstats, 0, col, finalbuffer);
		}
	}
}
void UpdateListViewWeaponStats(HWND listviewweaponstats, WeaponStats* weaponstats) {
	LVITEM itemTemp;
	itemTemp.mask = LVIF_TEXT;
	itemTemp.iItem = 0;
	std::wstring initbuffer = weaponstats->getStatText(0);
	LPWSTR finalbuffer = &initbuffer[0];

	itemTemp.pszText = finalbuffer;
	ListView_InsertItem(listviewweaponstats, &itemTemp);

	for (int col = 0; col < C_LVWS; col++) {
		initbuffer = weaponstats->getStatText(col);
		finalbuffer = &initbuffer[0];

		itemTemp.pszText = finalbuffer;
		itemTemp.iSubItem = col;

		ListView_SetItemText(listviewweaponstats, 0, col, finalbuffer);
	}

	GetDlgItem(GetParent(listviewweaponstats), IDC_MAIN_LVTS);
	UpdateListViewTotalStats(GetDlgItem(GetParent(listviewweaponstats), IDC_MAIN_LVTS), nullptr, weaponstats, nullptr);
}
bool CompareStats(std::wstring chartext, std::wstring classtext) {
	int string1 = std::stoi(chartext);
	int string2 = std::stoi(classtext);
	if (string1 < string2) {
		return true;
	}
	return false;
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
void UpdateListViewTotalStats(HWND listviewtotalstats, Stats* stats, WeaponStats* weaponstats, std::vector<statMeasure>* ledger) {
	static StatCalculator statcalculator;
	statcalculator.setStats(stats, weaponstats, ledger);
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

		itemTemp.pszText = finalbuffer;
		itemTemp.iSubItem = col;

		ListView_SetItemText(listviewtotalstats, 0, col, finalbuffer);
	}

}
