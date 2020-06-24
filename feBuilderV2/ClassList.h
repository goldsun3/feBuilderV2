#ifndef CLASSLIST_H
#define CLASSLIST_H
class ClassList
{
protected:
	std::vector<Class> classlist = {
		Class(L"Myrmidon",			Stats(L"20", L"4", L"7", L"3", L"6",  L"6", L"4", L"5", L"2", L"0"),
									Stats(L"0",  L"0", L"0", L"0", L"0",  L"1", L"0", L"0", L"0", L"0")),

		Class(L"Soldier",			Stats(L"20", L"4", L"8", L"3", L"6",  L"6", L"4", L"5", L"2", L"0"),
									Stats(L"0",  L"0", L"0", L"0", L"1",  L"0", L"0", L"0", L"0", L"0")),

		Class(L"Fighter",			Stats(L"20", L"4", L"8", L"3", L"6",  L"6", L"4", L"5", L"2", L"0"),
									Stats(L"0",  L"0", L"1", L"0", L"0",  L"0", L"0", L"0", L"0", L"0")),

		Class(L"Monk",				Stats(L"20", L"4", L"4", L"8", L"6",  L"6", L"4", L"3", L"4", L"0"),
									Stats(L"0",  L"0", L"0", L"0", L"0",  L"0", L"0", L"0", L"1", L"0")),

		Class(L"Lord",				Stats(L"25", L"5", L"9", L"6", L"10", L"10", L"8", L"6", L"3", L"0"),
									Stats(L"1",  L"1", L"0", L"0", L"0",  L"1",  L"1", L"0", L"0", L"2")),

		Class(L"Mercenary",			Stats(L"25", L"5", L"9", L"6", L"10", L"10", L"8", L"6", L"2", L"0"),
									Stats(L"1",  L"1", L"1", L"0", L"0",  L"1",  L"0", L"0", L"0", L"0")),

		Class(L"Thief",				Stats(L"25", L"5", L"9", L"6", L"11", L"11", L"8", L"6", L"2", L"0"),
									Stats(L"0",  L"1", L"0", L"0", L"2", L"2", L"0", L"0", L"0", L"0")),

		Class(L"Armored Knight",	Stats(L"30", L"4", L"9", L"6", L"7", L"4", L"8", L"12", L"1", L"0"),
									Stats(L"3",  L"0", L"1", L"0", L"0", L"-2", L"0", L"4", L"-1", L"0")),

		Class(L"Cavalier",			Stats(L"25", L"7", L"9", L"6", L"7", L"6", L"8", L"6", L"2", L"0"),
									Stats(L"1",  L"3", L"1", L"0", L"2", L"-2", L"0", L"1", L"0", L"0")),

		Class(L"Brigand",			Stats(L"28", L"5", L"10", L"6", L"7", L"7", L"8", L"6", L"2", L"0"),
									Stats(L"2",  L"1", L"2", L"0", L"0", L"1", L"0", L"0", L"0", L"0")),

		Class(L"Archer",			Stats(L"25", L"5", L"8", L"6", L"8", L"7", L"8", L"5", L"2", L"0"),
									Stats(L"0",  L"1", L"0", L"2", L"0", L"2", L"0", L"0", L"0", L"0")),

		Class(L"Brawler",			Stats(L"28", L"5", L"9", L"6", L"7", L"8", L"8", L"6", L"1", L"0"),
									Stats(L"1",  L"1", L"1", L"0", L"2", L"2", L"0", L"0", L"-1", L"0")),

		Class(L"Mage",				Stats(L"25", L"4", L"4", L"10", L"7", L"6", L"8", L"3", L"5", L"0"),
									Stats(L"0",  L"0", L"0", L"1", L"1", L"0", L"0", L"0", L"2", L"0")),

		Class(L"Dark Mage",			Stats(L"25", L"4", L"4", L"10", L"7", L"6", L"8", L"3", L"5", L"0"),
									Stats(L"0",  L"0", L"2", L"1", L"0", L"1", L"0", L"1", L"0", L"0")),

		Class(L"Priest",			Stats(L"25", L"4", L"4", L"9", L"7", L"6", L"8", L"3", L"5", L"0"),
									Stats(L"0",  L"0", L"0", L"1", L"1", L"0", L"0", L"0", L"3", L"0")),

		Class(L"Pegasus Knight",	Stats(L"25", L"6", L"8", L"6", L"7", L"8", L"8", L"5", L"4", L"0"),
									Stats(L"0",  L"2", L"1", L"0", L"2", L"2", L"0", L"0", L"2", L"0")),

		Class(L"Hero",				Stats(L"30", L"5", L"17", L"8", L"12", L"14", L"10", L"12", L"8", L"0"),
									Stats(L"3",  L"1", L"2", L"0", L"0", L"2", L"1", L"1", L"0", L"0")),

		Class(L"Swordmaster",		Stats(L"30", L"5", L"17", L"8", L"12", L"14", L"10", L"12", L"8", L"0"),
									Stats(L"1",  L"1", L"2", L"0", L"1", L"4", L"0", L"1", L"0", L"0")),

		Class(L"Assassin",			Stats(L"30", L"6", L"17", L"8", L"12", L"14", L"10", L"12", L"8", L"0"),
									Stats(L"0",  L"2", L"0", L"0", L"3", L"5", L"1", L"0", L"0", L"0")),

		Class(L"Fortress Knight",	Stats(L"35", L"4", L"17", L"8", L"12", L"8", L"10", L"17", L"7", L"0"),
									Stats(L"5",  L"0", L"1", L"0", L"0", L"-6", L"0", L"10", L"0", L"0")),

		Class(L"Paladin",			Stats(L"32", L"8", L"17", L"8", L"12", L"14", L"10", L"12", L"8", L"0"),
									Stats(L"2",  L"2", L"2", L"0", L"2", L"-2", L"0", L"2", L"2", L"0")),

		Class(L"Wyvern Rider",		Stats(L"30", L"7", L"18", L"8", L"12", L"14", L"10", L"12", L"8", L"0"),
									Stats(L"1",  L"2", L"2", L"0", L"1", L"2", L"0", L"2", L"0", L"0")),

		Class(L"Warrior",			Stats(L"32", L"5", L"19", L"8", L"12", L"14", L"10", L"13", L"8", L"0"),
									Stats(L"3",  L"1", L"3", L"0", L"1", L"1", L"1", L"0", L"0", L"0")),

		Class(L"Sniper",			Stats(L"30", L"5", L"17", L"8", L"12", L"14", L"10", L"12", L"8", L"0"),
									Stats(L"0",  L"1", L"1", L"0", L"5", L"0", L"3", L"0", L"0", L"0")),

		Class(L"Grappler",			Stats(L"32", L"6", L"17", L"8", L"12", L"14", L"10", L"14", L"7", L"0"),
									Stats(L"2",  L"2", L"1", L"0", L"3", L"3", L"0", L"1", L"-1", L"0")),

		Class(L"Warlock",			Stats(L"30", L"4", L"8", L"17", L"12", L"14", L"10", L"12", L"15", L"0"),
									Stats(L"0",  L"0", L"0", L"3", L"1", L"1", L"0", L"0", L"4", L"0")),

		Class(L"Dark Bishop",		Stats(L"30", L"4", L"8", L"17", L"12", L"14", L"10", L"12", L"15", L"0"),
									Stats(L"0",  L"0", L"0", L"4", L"2", L"0", L"0", L"3", L"0", L"0")),

		Class(L"Bishop",			Stats(L"30", L"4", L"8", L"15", L"12", L"14", L"10", L"12", L"15", L"0"),
									Stats(L"1",  L"0", L"0", L"2", L"1", L"1", L"0", L"0", L"5", L"0")),

		Class(L"Falcon Knight",		Stats(L"32", L"8", L"18", L"10", L"14", L"20", L"12", L"13", L"14", L"0"),
									Stats(L"0",  L"2", L"1", L"0", L"4", L"2", L"0", L"0", L"4", L"0")),

		Class(L"Wyvern Lord",		Stats(L"32", L"8", L"18", L"10", L"14", L"20", L"12", L"15", L"12", L"0"),
									Stats(L"2",  L"2", L"2", L"0", L"1", L"2", L"0", L"3", L"0", L"0")),

		Class(L"Mortal Savant",		Stats(L"32", L"6", L"17", L"17", L"14", L"16", L"12", L"14", L"12", L"0"),
									Stats(L"1",  L"2", L"1", L"2", L"1", L"1", L"0", L"2", L"2", L"0")),

		Class(L"Great Knight",		Stats(L"34", L"7", L"18", L"10", L"14", L"10", L"12", L"17", L"10", L"0"),
									Stats(L"5",  L"3", L"1", L"0", L"0", L"-2", L"0", L"2", L"0", L"0")),

		Class(L"Bow Knight",		Stats(L"32", L"8", L"17", L"10", L"14", L"16", L"12", L"14", L"10", L"0"),
									Stats(L"2",  L"2", L"1", L"0", L"3", L"-2", L"1", L"1", L"0", L"0")),

		Class(L"Dark Knight",		Stats(L"32", L"7", L"10", L"17", L"14", L"16", L"12", L"13", L"15", L"0"),
									Stats(L"1",  L"1", L"1", L"2", L"2", L"-2", L"0", L"1", L"3", L"0")),

		Class(L"Holy Knight",		Stats(L"32", L"7", L"8", L"15", L"14", L"16", L"12", L"13", L"16", L"0"),
									Stats(L"2",  L"1", L"1", L"1", L"2", L"-2", L"0", L"1", L"4", L"0")),

		Class(L"War Master",		Stats(L"33", L"6", L"20", L"10", L"14", L"16", L"12", L"15", L"10", L"0"),
									Stats(L"3",  L"2", L"5", L"0", L"0", L"2", L"1", L"1", L"0", L"0")),

		Class(L"Gremory",			Stats(L"32", L"5", L"8", L"17", L"14", L"16", L"12", L"13", L"16", L"0"),
									Stats(L"0",  L"1", L"0", L"5", L"2", L"1", L"0", L"0", L"4", L"2")),

		Class(L"Trickster",			Stats(L"28", L"5", L"14", L"12", L"10", L"14", L"12", L"10", L"10", L"0"),
									Stats(L"0", L"1", L"0", L"0", L"3", L"4", L"3", L"0", L"1", L"0")),

		Class(L"War Monk/Cleric",	Stats(L"32", L"6", L"17", L"10", L"10", L"10", L"10", L"14", L"11", L"0"),
									Stats(L"3", L"2", L"2", L"0", L"1", L"0", L"0", L"1", L"1", L"0")),

		Class(L"Dark Flier",		Stats(L"25", L"7", L"8", L"6", L"7", L"8", L"8", L"5", L"4", L"0"),
									Stats(L"0", L"2", L"0", L"0", L"3", L"2", L"0", L"0", L"3", L"0")),

		Class(L"Valkyrie",			Stats(L"20", L"6", L"5", L"10", L"10", L"9", L"9", L"9", L"13", L"0"),
									Stats(L"1", L"2", L"0", L"4", L"0", L"-2", L"0", L"1", L"2", L"0")),

		Class(L"Death Knight",		Stats(L"32", L"7", L"10", L"17", L"14", L"16", L"12", L"13", L"15", L"0"),
									Stats(L"5", L"2", L"1", L"0", L"0", L"-2", L"0", L"1", L"3", L"0")),


	};

public:

	int getClassCount() const {
		return classlist.size();
	}

	Class extractClass(UINT pos) {
		return classlist[pos];
	}

	Class extractClassPtr(UINT pos) const {
		return classlist[pos];
	}

	std::unique_ptr<Stats> extractSelClassStats(HWND hwnd, HWND& listboxclasses) const {
		std::unique_ptr<Stats> selStats = std::make_unique<Stats>();
		int pos = ListBox_GetCurSel(listboxclasses);
		int len = ListBox_GetTextLen(listboxclasses, pos);				//get length of text in new current selection
		const wchar_t* buffer = new const wchar_t[len];						//buffer variable 
		ListBox_GetText(listboxclasses, pos, buffer);						//get text located in new current selection

		for (int i = 0; i < getClassCount(); i++) {
			Class cLass = extractClassPtr(i);

			std::wstring name = cLass.getName();

			if (name.compare(buffer) == 0) {
				Stats stats;

				if (Button_GetCheck(GetDlgItem(hwnd, IDC_MAIN_BCBAS)) == BST_CHECKED) {
					*selStats = cLass.getBase();
					return selStats;
				}

				if (Button_GetCheck(GetDlgItem(hwnd, IDC_MAIN_BCBOS)) == BST_CHECKED) {
					*selStats = cLass.getBoosted();
					selStats->setBase(false);
					return selStats;
				}

				break;
			}
		}
	}
};

#endif