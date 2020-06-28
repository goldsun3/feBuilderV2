#ifndef CLASSLIST_H
#define CLASSLIST_H
class ClassList : public Class{
protected:
	std::vector<Class> classlist = {
		Class(L"Myrmidon",			L"20", L"4", L"7", L"3", L"6",  L"6", L"4", L"5", L"2", L"0",
									L"0",  L"0", L"0", L"0", L"0",  L"1", L"0", L"0", L"0", L"0"),

		Class(L"Soldier",			L"20", L"4", L"8", L"3", L"6",  L"6", L"4", L"5", L"2", L"0",
									L"0",  L"0", L"0", L"0", L"1",  L"0", L"0", L"0", L"0", L"0"),

		Class(L"Fighter",			L"20", L"4", L"8", L"3", L"6",  L"6", L"4", L"5", L"2", L"0",
									L"0",  L"0", L"1", L"0", L"0",  L"0", L"0", L"0", L"0", L"0"),

		Class(L"Monk",				L"20", L"4", L"4", L"8", L"6",  L"6", L"4", L"3", L"4", L"0",
									L"0",  L"0", L"0", L"0", L"0",  L"0", L"0", L"0", L"1", L"0"),

		Class(L"Lord",				L"25", L"5", L"9", L"6", L"10", L"10", L"8", L"6", L"3", L"0",
									L"1",  L"1", L"0", L"0", L"0",  L"1",  L"1", L"0", L"0", L"2"),

		Class(L"Mercenary",			L"25", L"5", L"9", L"6", L"10", L"10", L"8", L"6", L"2", L"0",
									L"1",  L"1", L"1", L"0", L"0",  L"1",  L"0", L"0", L"0", L"0"),

		Class(L"Thief",				L"25", L"5", L"9", L"6", L"11", L"11", L"8", L"6", L"2", L"0",
									L"0",  L"1", L"0", L"0", L"2", L"2", L"0", L"0", L"0", L"0"),

		Class(L"Armored Knight",	L"30", L"4", L"9", L"6", L"7", L"4", L"8", L"12", L"1", L"0",
									L"3",  L"0", L"1", L"0", L"0", L"-2", L"0", L"4", L"-1", L"0"),

		Class(L"Cavalier",			L"25", L"7", L"9", L"6", L"7", L"6", L"8", L"6", L"2", L"0",
									L"1",  L"3", L"1", L"0", L"2", L"-2", L"0", L"1", L"0", L"0"),

		Class(L"Brigand",			L"28", L"5", L"10", L"6", L"7", L"7", L"8", L"6", L"2", L"0",
									L"2",  L"1", L"2", L"0", L"0", L"1", L"0", L"0", L"0", L"0"),

		Class(L"Archer",			L"25", L"5", L"8", L"6", L"8", L"7", L"8", L"5", L"2", L"0",
									L"0",  L"1", L"0", L"2", L"0", L"2", L"0", L"0", L"0", L"0"),

		Class(L"Brawler",			L"28", L"5", L"9", L"6", L"7", L"8", L"8", L"6", L"1", L"0",
									L"1",  L"1", L"1", L"0", L"2", L"2", L"0", L"0", L"-1", L"0"),

		Class(L"Mage",				L"25", L"4", L"4", L"10", L"7", L"6", L"8", L"3", L"5", L"0",
									L"0",  L"0", L"0", L"1", L"1", L"0", L"0", L"0", L"2", L"0"),

		Class(L"Dark Mage",			L"25", L"4", L"4", L"10", L"7", L"6", L"8", L"3", L"5", L"0",
									L"0",  L"0", L"2", L"1", L"0", L"1", L"0", L"1", L"0", L"0"),

		Class(L"Priest",			L"25", L"4", L"4", L"9", L"7", L"6", L"8", L"3", L"5", L"0",
									L"0",  L"0", L"0", L"1", L"1", L"0", L"0", L"0", L"3", L"0"),

		Class(L"Pegasus Knight",	L"25", L"6", L"8", L"6", L"7", L"8", L"8", L"5", L"4", L"0",
									L"0",  L"2", L"1", L"0", L"2", L"2", L"0", L"0", L"2", L"0"),

		Class(L"Hero",				L"30", L"5", L"17", L"8", L"12", L"14", L"10", L"12", L"8", L"0",
									L"3",  L"1", L"2", L"0", L"0", L"2", L"1", L"1", L"0", L"0"),

		Class(L"Swordmaster",		L"30", L"5", L"17", L"8", L"12", L"14", L"10", L"12", L"8", L"0",
									L"1",  L"1", L"2", L"0", L"1", L"4", L"0", L"1", L"0", L"0"),

		Class(L"Assassin",			L"30", L"6", L"17", L"8", L"12", L"14", L"10", L"12", L"8", L"0",
									L"0",  L"2", L"0", L"0", L"3", L"5", L"1", L"0", L"0", L"0"),

		Class(L"Fortress Knight",	L"35", L"4", L"17", L"8", L"12", L"8", L"10", L"17", L"7", L"0",
									L"5",  L"0", L"1", L"0", L"0", L"-6", L"0", L"10", L"0", L"0"),

		Class(L"Paladin",			L"32", L"8", L"17", L"8", L"12", L"14", L"10", L"12", L"8", L"0",
									L"2",  L"2", L"2", L"0", L"2", L"-2", L"0", L"2", L"2", L"0"),

		Class(L"Wyvern Rider",		L"30", L"7", L"18", L"8", L"12", L"14", L"10", L"12", L"8", L"0",
									L"1",  L"2", L"2", L"0", L"1", L"2", L"0", L"2", L"0", L"0"),

		Class(L"Warrior",			L"32", L"5", L"19", L"8", L"12", L"14", L"10", L"13", L"8", L"0",
									L"3",  L"1", L"3", L"0", L"1", L"1", L"1", L"0", L"0", L"0"),

		Class(L"Sniper",			L"30", L"5", L"17", L"8", L"12", L"14", L"10", L"12", L"8", L"0",
									L"0",  L"1", L"1", L"0", L"5", L"0", L"3", L"0", L"0", L"0"),

		Class(L"Grappler",			L"32", L"6", L"17", L"8", L"12", L"14", L"10", L"14", L"7", L"0",
									L"2",  L"2", L"1", L"0", L"3", L"3", L"0", L"1", L"-1", L"0"),

		Class(L"Warlock",			L"30", L"4", L"8", L"17", L"12", L"14", L"10", L"12", L"15", L"0",
									L"0",  L"0", L"0", L"3", L"1", L"1", L"0", L"0", L"4", L"0"),

		Class(L"Dark Bishop",		L"30", L"4", L"8", L"17", L"12", L"14", L"10", L"12", L"15", L"0",
									L"0",  L"0", L"0", L"4", L"2", L"0", L"0", L"3", L"0", L"0"),

		Class(L"Bishop",			L"30", L"4", L"8", L"15", L"12", L"14", L"10", L"12", L"15", L"0",
									L"1",  L"0", L"0", L"2", L"1", L"1", L"0", L"0", L"5", L"0"),

		Class(L"Falcon Knight",		L"32", L"8", L"18", L"10", L"14", L"20", L"12", L"13", L"14", L"0",
									L"0",  L"2", L"1", L"0", L"4", L"2", L"0", L"0", L"4", L"0"),

		Class(L"Wyvern Lord",		L"32", L"8", L"18", L"10", L"14", L"20", L"12", L"15", L"12", L"0",
									L"2",  L"2", L"2", L"0", L"1", L"2", L"0", L"3", L"0", L"0"),

		Class(L"Mortal Savant",		L"32", L"6", L"17", L"17", L"14", L"16", L"12", L"14", L"12", L"0",
									L"1",  L"2", L"1", L"2", L"1", L"1", L"0", L"2", L"2", L"0"),

		Class(L"Great Knight",		L"34", L"7", L"18", L"10", L"14", L"10", L"12", L"17", L"10", L"0",
									L"5",  L"3", L"1", L"0", L"0", L"-2", L"0", L"2", L"0", L"0"),

		Class(L"Bow Knight",		L"32", L"8", L"17", L"10", L"14", L"16", L"12", L"14", L"10", L"0",
									L"2",  L"2", L"1", L"0", L"3", L"-2", L"1", L"1", L"0", L"0"),

		Class(L"Dark Knight",		L"32", L"7", L"10", L"17", L"14", L"16", L"12", L"13", L"15", L"0",
									L"1",  L"1", L"1", L"2", L"2", L"-2", L"0", L"1", L"3", L"0"),

		Class(L"Holy Knight",		L"32", L"7", L"8", L"15", L"14", L"16", L"12", L"13", L"16", L"0",
									L"2",  L"1", L"1", L"1", L"2", L"-2", L"0", L"1", L"4", L"0"),

		Class(L"War Master",		L"33", L"6", L"20", L"10", L"14", L"16", L"12", L"15", L"10", L"0",
									L"3",  L"2", L"5", L"0", L"0", L"2", L"1", L"1", L"0", L"0"),

		Class(L"Gremory",			L"32", L"5", L"8", L"17", L"14", L"16", L"12", L"13", L"16", L"0",
									L"0",  L"1", L"0", L"5", L"2", L"1", L"0", L"0", L"4", L"2"),

		Class(L"Trickster",			L"28", L"5", L"14", L"12", L"10", L"14", L"12", L"10", L"10", L"0",
									L"0", L"1", L"0", L"0", L"3", L"4", L"3", L"0", L"1", L"0"),

		Class(L"War Monk/Cleric",	L"32", L"6", L"17", L"10", L"10", L"10", L"10", L"14", L"11", L"0",
									L"3", L"2", L"2", L"0", L"1", L"0", L"0", L"1", L"1", L"0"),

		Class(L"Dark Flier",		L"25", L"7", L"8", L"6", L"7", L"8", L"8", L"5", L"4", L"0",
									L"0", L"2", L"0", L"0", L"3", L"2", L"0", L"0", L"3", L"0"),

		Class(L"Valkyrie",			L"20", L"6", L"5", L"10", L"10", L"9", L"9", L"9", L"13", L"0",
									L"1", L"2", L"0", L"4", L"0", L"-2", L"0", L"1", L"2", L"0"),

		Class(L"Death Knight",		L"32", L"7", L"10", L"17", L"14", L"16", L"12", L"13", L"15", L"0",
									L"5", L"2", L"1", L"0", L"0", L"-2", L"0", L"1", L"3", L"0"),


	};

public:
	ClassList() : Class() {}
	int getSize() const {
		return classlist.size();
	}

	Class getClass(UINT pos) {
		return classlist[pos];
	}

	Class getClassPtr(UINT pos) const {
		return classlist[pos];
	}

	std::unique_ptr<Class> getSelClass(HWND hwnd, HWND listboxclasses) {
		std::unique_ptr<Class> selClass = std::make_unique<Class>();
		int pos = ListBox_GetCurSel(listboxclasses);
		int len = ListBox_GetTextLen(listboxclasses, pos);				//get length of text in new current selection
		const wchar_t* buffer = new const wchar_t[len];						//buffer variable 
		ListBox_GetText(listboxclasses, pos, buffer);						//get text located in new current selection

		for (int i = 0; i < getSize(); i++) {
			Class cLass = getClassPtr(i);

			std::wstring name = cLass.getName();

			if (name.compare(buffer) == 0) {
				if (Button_GetCheck(GetDlgItem(hwnd, IDC_MAIN_BCBAS)) == BST_CHECKED) {
					*selClass = cLass;
					return selClass;
				}

				if (Button_GetCheck(GetDlgItem(hwnd, IDC_MAIN_BCBOS)) == BST_CHECKED) {
					*selClass = cLass;
					selClass->setBase(false);
					return selClass;
				}
			}
		}
		return selClass;
	}
};

#endif