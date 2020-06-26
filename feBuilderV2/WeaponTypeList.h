#ifndef WEAPONTYPELIST_H
#define WEAPONTYPELIST_H
class WeaponTypeList
{
protected:
	std::vector<WeaponType> weapontypelist = {
		WeaponType (L"Sword"),
		WeaponType (L"Lance"),
		WeaponType (L"Axe"),
		WeaponType (L"Bow"),
		WeaponType (L"Gauntlets"),
		WeaponType (L"Black Magic"),
		WeaponType (L"Dark Magic"),
		WeaponType (L"White Magic")
	};
public:
	int getWeaponTypeCount() const {
		return weapontypelist.size();
	}

	WeaponType extractWeaponType(UINT pos) {
		return weapontypelist[pos];
	}

	WeaponType extractWeaponTypePtr(UINT pos) const {
		return weapontypelist[pos];
	}

	//std::unique_ptr<WeaponType> extractSelWeaponStats(HWND& dropdownweapontype) const {
	//	std::unique_ptr<WeaponStats> selStats = std::make_unique<WeaponStats>();
	//	int pos = ListBox_GetCurSel(listboxweapons);
	//	int len = ListBox_GetTextLen(listboxweapons, pos);				//get length of text in new current selection
	//	const wchar_t* buffer = new const wchar_t[len];						//buffer variable 
	//	ListBox_GetText(listboxweapons, pos, buffer);						//get text located in new current selection

	//	for (int i = 0; i < getWeaponTypeCount(); i++) {
	//		Weapon weapon = extractWeaponTypePtr(i);

	//		std::wstring name = weapon.getName();

	//		if (name.compare(buffer) == 0) {
	//			WeaponStats weaponstats;
	//			*selStats = weapon.getStats();
	//			return selStats;
	//		}
	//	}
	//}

};

#endif