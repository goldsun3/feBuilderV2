#ifndef WEAPONLIST_H
#define WEAPONLIST_H
class WeaponList
{
protected:
	std::vector<Weapon> weaponlist = { //0 in last slot means infinite uses, change later
		Weapon(L"Broken Sword", L"Sword", WeaponStats(L"0",  L"30", L"0", L"1", L"20", L"E", L"0")),
		Weapon(L"Iron Sword",   L"Sword", WeaponStats(L"5",  L"90", L"0", L"1", L"5",  L"E", L"40")),
		Weapon(L"Steel Sword",  L"Sword", WeaponStats(L"8",  L"85", L"0", L"1", L"10", L"D", L"50")),
		Weapon(L"Broken Lance", L"Lance", WeaponStats(L"0",  L"30", L"0", L"1", L"20", L"E", L"0")),
		Weapon(L"Iron Lance",   L"Lance", WeaponStats(L"6",  L"80", L"0", L"1", L"6",  L"E", L"30")),
		Weapon(L"Steel Lance",  L"Lance", WeaponStats(L"9",  L"75", L"0", L"1", L"11", L"D", L"40")),
		Weapon(L"Broken Axe",   L"Axe",   WeaponStats(L"0",  L"30", L"0", L"1", L"20", L"E", L"0")),
		Weapon(L"Iron Axe",	    L"Axe",   WeaponStats(L"8",  L"70", L"0", L"1", L"7",  L"E", L"45")),
		Weapon(L"Steel Axe",    L"Axe",   WeaponStats(L"11", L"65", L"0", L"1", L"12", L"D", L"55")),
	};		

public:
	int getWeaponCount() const {
		return weaponlist.size();
	}

	Weapon extractWeapon(UINT pos) {
		return weaponlist[pos];
	}

	Weapon extractWeaponPtr(UINT pos) const {
		return weaponlist[pos];
	}

	std::unique_ptr<WeaponStats> extractSelWeaponStats(HWND& listboxweapons) const {
		std::unique_ptr<WeaponStats> selStats = std::make_unique<WeaponStats>();
		int pos = ListBox_GetCurSel(listboxweapons);
		int len = ListBox_GetTextLen(listboxweapons, pos);				//get length of text in new current selection
		const wchar_t* buffer = new const wchar_t[len];						//buffer variable 
		ListBox_GetText(listboxweapons, pos, buffer);						//get text located in new current selection

		for (int i = 0; i < getWeaponCount(); i++) {
			Weapon weapon = extractWeaponPtr(i);

			std::wstring name = weapon.getName();

			if (name.compare(buffer) == 0) {
				WeaponStats weaponstats;
				*selStats = weapon.getStats();
				return selStats;
			}
		}
	}
};

#endif