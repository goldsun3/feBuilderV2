#ifndef WEAPONLIST_H
#define WEAPONLIST_H
class WeaponList
{
protected:
	std::vector<Weapon> weaponlist = { //0 in last slot means infinite uses, change later
		Weapon (L"Broken Sword",         L"Sword",       WeaponStats (L"0",  L"30",  L"0",  L"1",   L"20", L"E", L"0")),
		Weapon (L"Iron Sword",           L"Sword",       WeaponStats (L"5",  L"90",  L"0",  L"1",   L"5",  L"E", L"40")),
		Weapon (L"Steel Sword",          L"Sword",       WeaponStats (L"8",  L"85",  L"0",  L"1",   L"10", L"D", L"50")),
		Weapon (L"Silver Sword",         L"Sword",       WeaponStats (L"12", L"90",  L"0",  L"1",   L"8",  L"B", L"30")),
		Weapon (L"Brave Sword",          L"Sword",       WeaponStats (L"9",  L"75",  L"0",  L"1",   L"12", L"B", L"30")),
		Weapon (L"Killing Edge",         L"Sword",       WeaponStats (L"8",  L"85",  L"25", L"1",   L"10", L"C", L"20")),
		Weapon (L"Training Sword",       L"Sword",       WeaponStats (L"3",  L"100", L"0",  L"1",   L"4",  L"E", L"50")),
		Weapon (L"Levin Sword",	         L"Sword",       WeaponStats (L"9",  L"70",  L"0",  L"1-2", L"9",  L"C", L"25")),
		Weapon (L"Armorslayer",          L"Sword",       WeaponStats (L"8",  L"80",  L"0",  L"1",   L"11", L"D", L"20")),
		Weapon (L"Rapier",               L"Sword",       WeaponStats (L"7",  L"95",  L"10", L"1",   L"5",  L"E", L"40")),
		Weapon (L"Devil Sword",          L"Sword",       WeaponStats (L"13", L"65",  L"0",  L"1",   L"10", L"D", L"30")),
		Weapon (L"Wo Dao",               L"Sword",       WeaponStats (L"8",  L"90",  L"30", L"1",   L"5",  L"B", L"15")),
		Weapon (L"Sword of Seiros",      L"Sword",       WeaponStats (L"11", L"80",  L"10", L"1",   L"6",  L"A", L"30")),
		Weapon (L"Sword of Begalta",	 L"Sword",       WeaponStats (L"12", L"100", L"0",  L"1",   L"5",  L"A", L"30")),
		Weapon (L"Sword of Moralta",     L"Sword",       WeaponStats (L"13", L"75",  L"25", L"1",   L"9",  L"A", L"30")),
		Weapon (L"Cursed Ashiya Sword",  L"Sword",       WeaponStats (L"13", L"70",  L"40", L"1",   L"8",  L"B", L"15")),
		Weapon (L"Sword of Zoltan",      L"Sword",       WeaponStats (L"13", L"90",  L"0",  L"1",   L"9",  L"A", L"25")),
		Weapon (L"Thunderbrand",	     L"Sword",       WeaponStats (L"13", L"70",  L"10", L"1",   L"7",  L"E", L"30")),
		Weapon (L"Blutgang",             L"Sword",       WeaponStats (L"13", L"80",  L"0",  L"1",   L"7",  L"E", L"20")),
		Weapon (L"Sword of the Creator", L"Sword",       WeaponStats (L"7",  L"90",  L"0",  L"1-2", L"9",  L"E", L"20")),
		Weapon (L"Venin Edge",           L"Sword",       WeaponStats (L"5",  L"90",  L"0",  L"1",   L"6",  L"C", L"20")),
		Weapon (L"Mercurius",            L"Sword",       WeaponStats (L"15", L"100", L"10", L"1",   L"7",  L"A", L"40")),
		Weapon (L"Rusted Sword",         L"Sword",       WeaponStats (L"0",  L"30",  L"0",  L"1",   L"20", L"E", L"0")),
		Weapon (L"Broken Lance",         L"Lance",       WeaponStats (L"0",  L"30",  L"0",  L"1",   L"20", L"E", L"0")),
		Weapon (L"Iron Lance",           L"Lance",       WeaponStats (L"6",  L"80",  L"0",  L"1",   L"6",  L"E", L"30")),
		Weapon (L"Steel Lance",          L"Lance",       WeaponStats (L"9",  L"75",  L"0",  L"1",   L"11", L"D", L"40")),
		Weapon (L"Silver Lance",         L"Lance",       WeaponStats (L"13", L"80",  L"0",  L"1",   L"9",  L"B", L"25")),
		Weapon (L"Brave Lance",          L"Lance",       WeaponStats (L"10", L"70",  L"0",  L"1",   L"13", L"B", L"25")),
		Weapon (L"Killer Lance",         L"Lance",       WeaponStats (L"9",  L"80",  L"25", L"1",   L"11", L"C", L"20")),
		Weapon (L"Training Lance",       L"Lance",       WeaponStats (L"4",  L"90",  L"0",  L"1",   L"5",  L"E", L"50")),
		Weapon (L"Javelin",              L"Lance",       WeaponStats (L"2",  L"80",  L"0",  L"1-2", L"8",  L"D", L"30")),
		Weapon (L"Short Spear",          L"Lance",       WeaponStats (L"5",  L"75",  L"0",  L"1-2", L"10", L"C", L"25")),
		Weapon (L"Spear",                L"Lance",       WeaponStats (L"8",  L"70",  L"0",  L"1-2", L"12", L"B", L"20")),
		Weapon (L"Horseslayer",          L"Lance",       WeaponStats (L"8",  L"70",  L"0",  L"1",   L"13", L"D", L"20")),
		Weapon (L"Blessed Lance",        L"Lance",       WeaponStats (L"7",  L"80",  L"0",  L"1",   L"14", L"C", L"20")),
		Weapon (L"Crescent Sickle",      L"Lance",       WeaponStats (L"10", L"80",  L"0",  L"1",   L"12", L"B", L"50")),
		Weapon (L"Lance of Zoltan",      L"Lance",       WeaponStats (L"15", L"80",  L"0",  L"1",   L"10", L"A", L"20")),
		Weapon (L"Lance of Ruin",        L"Lance",       WeaponStats (L"22", L"65",  L"20", L"1",   L"9",  L"E", L"20")),
		Weapon (L"Areadbhar",            L"Lance",       WeaponStats (L"19", L"75",  L"10", L"1",   L"9",  L"E", L"20")),
		Weapon (L"Luin",                 L"Lance",       WeaponStats (L"17", L"90",  L"10", L"1",   L"9",  L"E", L"20")),
		Weapon (L"Spear of Assal",       L"Lance",       WeaponStats (L"14", L"85",  L"10", L"1",   L"9",  L"A", L"30")),
		Weapon (L"Arrow of Indra",       L"Lance",       WeaponStats (L"12", L"75",  L"0",  L"1-2", L"14", L"C", L"30")),
		Weapon (L"Venin Lance",          L"Lance",       WeaponStats (L"6",  L"80",  L"0",  L"1",   L"7",  L"C", L"20")),
		Weapon (L"Gradivus",             L"Lance",       WeaponStats (L"17", L"90",  L"10", L"1-2", L"8",  L"A", L"30")),
		Weapon (L"Rusted Lance",         L"Lance",       WeaponStats (L"0",  L"30",  L"0",  L"1",   L"20", L"E", L"0")),
		Weapon (L"Broken Axe",           L"Axe",         WeaponStats (L"0",  L"30",  L"0",  L"1",   L"20", L"E", L"0")),
		Weapon (L"Iron Axe",	         L"Axe",         WeaponStats (L"8",  L"70",  L"0",  L"1",   L"7",  L"E", L"45")),
		Weapon (L"Steel Axe",            L"Axe",         WeaponStats (L"11", L"65",  L"0",  L"1",   L"12", L"D", L"55")),
		Weapon (L"Silver Axe",           L"Axe",         WeaponStats (L"16", L"70",  L"0",  L"1",   L"10", L"B", L"30")),
		Weapon (L"Brave Axe",	         L"Axe",         WeaponStats (L"12", L"60",  L"0",  L"1",   L"14", L"B", L"30")),
		Weapon (L"Killer Axe",           L"Axe",         WeaponStats (L"11", L"70",  L"25", L"1",   L"12", L"C", L"20")),
		Weapon (L"Training Axe",         L"Axe",         WeaponStats (L"6",  L"80",  L"0",  L"1",   L"6",  L"E", L"50")),
		Weapon (L"Bolt Axe",	         L"Axe",         WeaponStats (L"14", L"60",  L"0",  L"1-2", L"15", L"B", L"25")),
		Weapon (L"Hand Axe",             L"Axe",         WeaponStats (L"4",  L"70",  L"0",  L"1-2", L"10", L"D", L"30")),
		Weapon (L"Short Axe",            L"Axe",         WeaponStats (L"8",  L"65",  L"0",  L"1-2", L"12", L"C", L"25")),
		Weapon (L"Tomahawk",	         L"Axe",         WeaponStats (L"12", L"60",  L"0",  L"1-2", L"14", L"B", L"20")),
		Weapon (L"Hammer",               L"Axe",         WeaponStats (L"10", L"60",  L"0",  L"1",   L"15", L"D", L"20")),
		Weapon (L"Devil Axe",            L"Axe",         WeaponStats (L"18", L"60",  L"0",  L"1",   L"14", L"D", L"30")),
		Weapon (L"Freikugel",	         L"Axe",         WeaponStats (L"23", L"65",  L"10", L"1",   L"11", L"E", L"20")),
		Weapon (L"Crusher",              L"Axe",         WeaponStats (L"18", L"60",  L"0",  L"1",   L"11", L"E", L"20")),
		Weapon (L"Axe of Ukonvasara",    L"Axe",         WeaponStats (L"19", L"65",  L"20", L"1",   L"15", L"A", L"30")),
		Weapon (L"Axe of Zoltan",	     L"Axe",         WeaponStats (L"17", L"70",  L"0",  L"1",   L"14", L"A", L"20")),
		Weapon (L"Mace",                 L"Axe",         WeaponStats (L"6",  L"70",  L"0",  L"1",   L"6",  L"E", L"20")),
		Weapon (L"Aymr",                 L"Axe",         WeaponStats (L"24", L"60",  L"20", L"1",   L"11", L"E", L"20")),
		Weapon (L"Venin Axe",	         L"Axe",         WeaponStats (L"8",  L"70",  L"0",  L"1",   L"8",  L"C", L"20")),
		Weapon (L"Hauteclere",           L"Axe",         WeaponStats (L"19", L"80",  L"10", L"1",   L"12", L"A", L"40")),
		Weapon (L"Rusted Axe",           L"Axe",         WeaponStats (L"0",  L"30",  L"0",  L"1",   L"20", L"E", L"0")),
		Weapon (L"Broken Bow",           L"Bow",         WeaponStats (L"0",  L"30",  L"0",  L"1",   L"20", L"E", L"0")),
		Weapon (L"Iron Bow",             L"Bow",         WeaponStats (L"6",  L"85",  L"0",  L"2",   L"6",  L"E", L"40")),
		Weapon (L"Steel Bow",            L"Bow",         WeaponStats (L"9",  L"80",  L"0",  L"2",   L"11", L"D", L"50")),
		Weapon (L"Silver Bow",           L"Bow",         WeaponStats (L"12", L"75",  L"0",  L"2",   L"9",  L"B", L"30")),
		Weapon (L"Brave Bow",            L"Bow",         WeaponStats (L"10", L"70",  L"0",  L"2",   L"13", L"B", L"30")),
		Weapon (L"Killer Bow",           L"Bow",         WeaponStats (L"9",  L"80",  L"25", L"2",   L"11", L"C", L"20")),
	    Weapon (L"Training Bow",         L"Bow",         WeaponStats (L"3",  L"90",  L"0",  L"2",   L"5",  L"E", L"50")),
		Weapon (L"Magic Bow",            L"Bow",         WeaponStats (L"8",  L"75",  L"0",  L"2",   L"9",  L"B", L"25")),
		Weapon (L"Longbow",              L"Bow",         WeaponStats (L"9",  L"70",  L"0",  L"2-3", L"13", L"C", L"20")),
		Weapon (L"Mini Bow",             L"Bow",         WeaponStats (L"4",  L"90",  L"0",  L"1-2", L"3",  L"D", L"50")),
		Weapon (L"Blessed Bow",          L"Bow",         WeaponStats (L"6",  L"70",  L"0",  L"2",   L"14", L"C", L"20")),
		Weapon (L"Tathlum Bow",          L"Bow",         WeaponStats (L"13", L"80",  L"10", L"2",   L"11", L"A", L"30")),
		Weapon (L"The Inexhaustible",    L"Bow",         WeaponStats (L"11", L"80",  L"0",  L"2",   L"11", L"A", L"30")),
		Weapon (L"Bow of Zoltan",        L"Bow",         WeaponStats (L"13", L"75",  L"0",  L"2",   L"8",  L"A", L"20")),
		Weapon (L"Failnaught",           L"Bow",         WeaponStats (L"18", L"75",  L"20", L"2-3", L"9",  L"E", L"20")),
		Weapon (L"Venin Bow",            L"Bow",         WeaponStats (L"6",  L"85",  L"0",  L"2",   L"6",  L"C", L"20")),
		Weapon (L"Parthia",              L"Bow",         WeaponStats (L"15", L"85",  L"10", L"2",   L"7",  L"A", L"40")),
		Weapon (L"Rusted Bow",           L"Bow",         WeaponStats (L"0",  L"30",  L"0",  L"2",   L"5",  L"E", L"45")),
		Weapon (L"Broken Gauntlets",     L"Gauntlets",   WeaponStats (L"0",  L"30",  L"0",  L"1",   L"20", L"E", L"0")),
		Weapon (L"Iron Gauntlets",       L"Gauntlets",   WeaponStats (L"1",  L"85",  L"5",  L"1",   L"3",  L"E", L"50")),
		Weapon (L"Steel Gauntlets",      L"Gauntlets",   WeaponStats (L"3",  L"80",  L"5",  L"1",   L"5",  L"D", L"60")),
		Weapon (L"Silver Gauntlets",     L"Gauntlets",   WeaponStats (L"4",  L"85",  L"5",  L"1",   L"7",  L"B", L"40")),
		Weapon (L"Training Gauntlets",   L"Gauntlets",   WeaponStats (L"0",  L"90",  L"5",  L"1",   L"1",  L"E", L"70")),
		Weapon (L"Dragon Claws",         L"Gauntlets",   WeaponStats (L"4",  L"75",  L"5",  L"1",   L"7",  L"A", L"30")),
		Weapon (L"Killer Knuckles",      L"Gauntlets",   WeaponStats (L"3",  L"80",  L"20", L"1",   L"5",  L"B", L"30")),
		Weapon (L"Aura Gauntlets",       L"Gauntlets",   WeaponStats (L"2",  L"70",  L"0",  L"1",   L"4",  L"A", L"30")),
		Weapon (L"Rusted Gauntlets",     L"Gauntlets",   WeaponStats (L"0",  L"30",  L"0",  L"1",   L"20", L"E", L"0")),
		Weapon (L"Vajra-Mushti",         L"Gauntlets",   WeaponStats (L"7",  L"90",  L"10", L"1",   L"7",  L"E", L"30")),
		Weapon (L"Fire",                 L"Black Magic", WeaponStats (L"3",  L"90",  L"0",  L"1-2", L"3",  L"E", L"10")),
		Weapon (L"Bolganone",	         L"Black Magic", WeaponStats (L"8",  L"85",  L"0",  L"1-2", L"6",  L"C", L"5")),
		Weapon (L"Ragnarok",             L"Black Magic", WeaponStats (L"15", L"80",  L"5",  L"1-2", L"9",  L"B", L"3")),
		Weapon (L"Thunder",              L"Black Magic", WeaponStats (L"4",  L"80",  L"5",  L"1-2", L"4",  L"E", L"8")),
		Weapon (L"Thoron",               L"Black Magic", WeaponStats (L"9",  L"75",  L"10", L"1-3", L"7",  L"C", L"4")),
		Weapon (L"Bolting",              L"Black Magic", WeaponStats (L"12", L"65",  L"15",L"3-10", L"18", L"B", L"2")),
		Weapon (L"Wind",                 L"Black Magic", WeaponStats (L"2",  L"100", L"10", L"1-2", L"2",  L"E", L"12")),
		Weapon (L"Cutting Gale",         L"Black Magic", WeaponStats (L"7",  L"95",  L"10", L"1-2", L"5",  L"C", L"6")),
		Weapon (L"Excalibur",            L"Black Magic", WeaponStats (L"11", L"100", L"15", L"1-2", L"8",  L"B", L"4")),
		Weapon (L"Blizzard",             L"Black Magic", WeaponStats (L"3",  L"70",  L"15", L"1-2", L"4",  L"E", L"10")),
		Weapon (L"Fimbulvetr",           L"Black Magic", WeaponStats (L"12", L"65",  L"25", L"1-2", L"10", L"B", L"3")),
		Weapon (L"Sagittae",             L"Black Magic", WeaponStats (L"7",  L"90",  L"5",  L"1-2", L"6",  L"C", L"10")),
		Weapon (L"Meteor",               L"Black Magic", WeaponStats (L"10", L"80",  L"0", L"3-10", L"19", L"B", L"1")),
		Weapon (L"Agnea's Arrow",        L"Black Magic", WeaponStats (L"16", L"70",  L"5",  L"1-2", L"13", L"A", L"2")),
		Weapon (L"Miasma",               L"Dark Magic",  WeaponStats (L"5",  L"80",  L"0",  L"1-2", L"5",  L"E", L"10")),
		Weapon (L"Mire",	             L"Dark Magic",  WeaponStats (L"3",  L"70",  L"0",  L"1-3", L"5",  L"E", L"8")),
		Weapon (L"Swarm",                L"Dark Magic",  WeaponStats (L"4",  L"70",  L"0",  L"1-2", L"4",  L"E", L"8")),
		Weapon (L"Banshee",              L"Dark Magic",  WeaponStats (L"9",  L"75",  L"5",  L"1-2", L"9",  L"C", L"5")),
		Weapon (L"Death",                L"Dark Magic",  WeaponStats (L"6",  L"70",  L"20", L"1-3", L"8",  L"C", L"4")),
		Weapon (L"Luna",                 L"Dark Magic",  WeaponStats (L"1",  L"65",  L"0",  L"1-2", L"7",  L"C", L"2")),
		Weapon (L"Dark Spikes",          L"Dark Magic",  WeaponStats (L"13", L"80",  L"0",  L"1-2", L"11", L"B", L"3")),
		Weapon (L"Hades",                L"Dark Magic",  WeaponStats (L"18", L"65",  L"10", L"1-2", L"16", L"A", L"2")),
		Weapon (L"Bohr",                 L"Dark Magic",  WeaponStats (L"10", L"60",  L"0", L"3-10", L"20", L"B", L"3")),
		Weapon (L"Quake",                L"Dark Magic",  WeaponStats (L"8",  L"50",  L"0",  L"ALL", L"20", L"B", L"1")),
		Weapon (L"Heal",                 L"White Magic", WeaponStats (L"8",  L"100", L"0",  L"1",   L"0",  L"E", L"10")),
		Weapon (L"Recover",	             L"White Magic", WeaponStats (L"30", L"100", L"0",  L"1",   L"0",  L"C", L"5")),
		Weapon (L"Physic",               L"White Magic", WeaponStats (L"8",  L"100", L"0",  L"1",   L"0",  L"C", L"5")),
		Weapon (L"Fortify",              L"White Magic", WeaponStats (L"15", L"100", L"0",  L"0",   L"0",  L"A", L"2")),
		Weapon (L"Nosferatu",            L"White Magic", WeaponStats (L"1",  L"80",  L"0",  L"1-2", L"8",  L"E", L"12")),
		Weapon (L"Seraphim",             L"White Magic", WeaponStats (L"8",  L"75",  L"5",  L"1-2", L"10", L"C", L"8")),
		Weapon (L"Aura",                 L"White Magic", WeaponStats (L"12", L"70",  L"20", L"1-2", L"12", L"B", L"3")),
		Weapon (L"Abraxas",              L"White Magic", WeaponStats (L"14", L"90",  L"5",  L"1-2", L"13", L"A", L"2")),
		Weapon (L"Torch",                L"White Magic", WeaponStats (L"0",  L"0",   L"0",  L"1-2", L"0",  L"E", L"10")),
		Weapon (L"Restore",              L"White Magic", WeaponStats (L"0",  L"0",   L"0",  L"0",   L"0",  L"C", L"10")),
		Weapon (L"Ward",                 L"White Magic", WeaponStats (L"0",  L"0",   L"0",  L"1",   L"0",  L"C", L"5")),
		Weapon (L"Silence",              L"White Magic", WeaponStats (L"0",  L"100", L"0", L"3-10", L"0",  L"B", L"3")),
		Weapon (L"Rescue",               L"White Magic", WeaponStats (L"0",  L"0",   L"0",  L"0",   L"0",  L"B", L"3")),
		Weapon (L"Warp",                 L"White Magic", WeaponStats (L"0",  L"0",   L"0",  L"0",   L"0",  L"B", L"1")),
	};		

public:
	int getWeaponCount () const {
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