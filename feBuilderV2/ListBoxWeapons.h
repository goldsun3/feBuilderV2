#ifndef LISTBOXWEAPONS_H
#define LISTBOXWEAPONS_H
class ListBoxWeapons : ListBoxTemplate
{
protected:
public:
	virtual void Construct(HWND hwnd) {
		hListBox = CreateWindowEx(
			WS_EX_CLIENTEDGE,
			L"LISTBOX",
			L"",
			WS_CHILD | WS_CLIPSIBLINGS | WS_VISIBLE |
			LBS_STANDARD | LBS_NOTIFY | LBS_HASSTRINGS,
			160, 10, 150, 500,
			hwnd,
			(HMENU)IDC_MAIN_LBW,
			GetModuleHandle(NULL),
			NULL);

		if (hListBox == NULL) {
			MessageBox(hwnd, L"Could not create list box.", L"Error!", MB_OK | MB_ICONERROR);
		}
	}

	void SetWeaponList(WeaponList weaponlist) {
		for (int i = 0; i < weaponlist.getSize(); ++i) {
			Weapon weapon = weaponlist.getWeapon(i);
			std::wstring initbuffer = weapon.getName();
			LPCTSTR lastbuffer = initbuffer.data();
			ListBox_AddString(hListBox, lastbuffer);
		}
	}

	HWND GetHandle() { return hListBox; }
};

#endif