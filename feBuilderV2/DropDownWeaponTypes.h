#ifndef DROPDOWNWEAPONTYPE_H
#define DROPDOWNWEAPONTYPE_H
class DropDownWeaponTypes : DropDownTemplate
{
protected:
public:
	virtual void Construct(HWND hwnd) {
		hDropDown = CreateWindowEx(
			WS_EX_CLIENTEDGE,
			L"COMBOBOX",
			L"",
			WS_CHILD | WS_CLIPSIBLINGS | WS_VISIBLE |
			CBS_DROPDOWNLIST | CBS_HASSTRINGS,
			350, 150, 150, 500,
			hwnd,
			(HMENU)IDC_MAIN_DDWT,
			GetModuleHandle(NULL),
			NULL);

		if (hDropDown == NULL) {
			MessageBox(hwnd, L"Could not create list box.", L"Error!", MB_OK | MB_ICONERROR);
		}
	}

	void SetWeaponTypes(WeaponTypeList weapontypelist) {
		for (int i = 0; i < weapontypelist.getWeaponTypeCount(); ++i) {
			WeaponType weapontype = weapontypelist.extractWeaponType(i);
			std::wstring initbuffer = weapontype.getWeaponType();
			LPCTSTR lastbuffer = &initbuffer[0];
			ComboBox_AddString(hDropDown, lastbuffer);
		}

	}

	HWND GetHandle() { return hDropDown; }
};

#endif