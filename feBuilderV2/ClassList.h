#ifndef CLASSLIST_H
#define CLASSLIST_H
class ClassList
{
protected:
	std::vector<Class> classlist = {
		Class(L"Myrmidon",			CharacterStats(L"20", L"4", L"7", L"3", L"6",  L"6", L"4", L"5", L"2", L"0"),
									CharacterStats(L"0",  L"0", L"0", L"0", L"0",  L"1", L"0", L"0", L"0", L"0")),

		Class(L"Soldier",			CharacterStats(L"20", L"4", L"8", L"3", L"6",  L"6", L"4", L"5", L"2", L"0"),
									CharacterStats(L"0",  L"0", L"0", L"0", L"1",  L"0", L"0", L"0", L"0", L"0")),

		Class(L"Fighter",			CharacterStats(L"20", L"4", L"8", L"3", L"6",  L"6", L"4", L"5", L"2", L"0"),
									CharacterStats(L"0",  L"0", L"1", L"0", L"0",  L"0", L"0", L"0", L"0", L"0")),

		Class(L"Monk",				CharacterStats(L"20", L"4", L"4", L"8", L"6",  L"6", L"4", L"3", L"4", L"0"),
									CharacterStats(L"0",  L"0", L"0", L"0", L"0",  L"0", L"0", L"0", L"1", L"0")),

		Class(L"Lord",				CharacterStats(L"25", L"5", L"9", L"6", L"10", L"10", L"8", L"6", L"3", L"0"),
									CharacterStats(L"1",  L"1", L"0", L"0", L"0",  L"1",  L"1", L"0", L"0", L"2")),

		Class(L"Mercenary",			CharacterStats(L"25", L"5", L"9", L"6", L"10", L"10", L"8", L"6", L"2", L"0"),
									CharacterStats(L"1",  L"1", L"1", L"0", L"0",  L"1",  L"0", L"0", L"0", L"0")),

		Class(L"Thief",				CharacterStats(L"25", L"5", L"9", L"6", L"11", L"11", L"8", L"6", L"2", L"0"),
									CharacterStats(L"0",  L"1", L"0", L"0", L"2", L"2", L"0", L"0", L"0", L"0")),

		Class(L"Armored Knight",	CharacterStats(L"30", L"4", L"9", L"6", L"7", L"4", L"8", L"12", L"1", L"0"),
									CharacterStats(L"3",  L"0", L"1", L"0", L"0", L"-2", L"0", L"4", L"-1", L"0")),

		Class(L"Cavalier",			CharacterStats(L"25", L"7", L"9", L"6", L"7", L"6", L"8", L"6", L"2", L"0"),
									CharacterStats(L"1",  L"3", L"1", L"0", L"2", L"-2", L"0", L"1", L"0", L"0")),

		Class(L"Brigand",			CharacterStats(L"28", L"5", L"10", L"6", L"7", L"7", L"8", L"6", L"2", L"0"),
									CharacterStats(L"2",  L"1", L"2", L"0", L"0", L"1", L"0", L"0", L"0", L"0")),

		Class(L"Archer",			CharacterStats(L"25", L"5", L"8", L"6", L"8", L"7", L"8", L"5", L"2", L"0"),
									CharacterStats(L"0",  L"1", L"0", L"2", L"0", L"2", L"0", L"0", L"0", L"0")),

		Class(L"Brawler",			CharacterStats(L"28", L"5", L"9", L"6", L"7", L"8", L"8", L"6", L"1", L"0"),
									CharacterStats(L"1",  L"1", L"1", L"0", L"2", L"2", L"0", L"0", L"-1", L"0")),

		Class(L"Mage",				CharacterStats(L"25", L"4", L"4", L"10", L"7", L"6", L"8", L"3", L"5", L"0"),
									CharacterStats(L"0",  L"0", L"0", L"1", L"1", L"0", L"0", L"0", L"2", L"0")),

		Class(L"Dark Mage",			CharacterStats(L"25", L"4", L"4", L"10", L"7", L"6", L"8", L"3", L"5", L"0"),
									CharacterStats(L"0",  L"0", L"2", L"1", L"0", L"1", L"0", L"1", L"0", L"0")),

		Class(L"Priest",			CharacterStats(L"25", L"4", L"4", L"9", L"7", L"6", L"8", L"3", L"5", L"0"),
									CharacterStats(L"0",  L"0", L"0", L"1", L"1", L"0", L"0", L"0", L"3", L"0")),

		Class(L"Pegasus Knight",	CharacterStats(L"25", L"6", L"8", L"6", L"7", L"8", L"8", L"5", L"4", L"0"),
									CharacterStats(L"0",  L"2", L"1", L"0", L"2", L"2", L"0", L"0", L"2", L"0")),

		Class(L"Hero",				CharacterStats(L"30", L"5", L"17", L"8", L"12", L"14", L"10", L"12", L"8", L"0"),
									CharacterStats(L"3",  L"1", L"2", L"0", L"0", L"2", L"1", L"1", L"0", L"0")),

		Class(L"Swordmaster",		CharacterStats(L"30", L"5", L"17", L"8", L"12", L"14", L"10", L"12", L"8", L"0"),
									CharacterStats(L"1",  L"1", L"2", L"0", L"1", L"4", L"0", L"1", L"0", L"0")),

		Class(L"Assassin",			CharacterStats(L"30", L"6", L"17", L"8", L"12", L"14", L"10", L"12", L"8", L"0"),
									CharacterStats(L"0",  L"2", L"0", L"0", L"3", L"5", L"1", L"0", L"0", L"0")),

		Class(L"Fortress Knight",	CharacterStats(L"35", L"4", L"17", L"8", L"12", L"8", L"10", L"17", L"7", L"0"),
									CharacterStats(L"5",  L"0", L"1", L"0", L"0", L"-6", L"0", L"10", L"0", L"0")),

		Class(L"Paladin",			CharacterStats(L"32", L"8", L"17", L"8", L"12", L"14", L"10", L"12", L"8", L"0"),
									CharacterStats(L"2",  L"2", L"2", L"0", L"2", L"-2", L"0", L"2", L"2", L"0")),

		Class(L"Wyvern Rider",		CharacterStats(L"30", L"7", L"18", L"8", L"12", L"14", L"10", L"12", L"8", L"0"),
									CharacterStats(L"1",  L"2", L"2", L"0", L"1", L"2", L"0", L"2", L"0", L"0")),

		Class(L"Warrior",			CharacterStats(L"32", L"5", L"19", L"8", L"12", L"14", L"10", L"13", L"8", L"0"),
									CharacterStats(L"3",  L"1", L"3", L"0", L"1", L"1", L"1", L"0", L"0", L"0")),

		Class(L"Sniper",			CharacterStats(L"30", L"5", L"17", L"8", L"12", L"14", L"10", L"12", L"8", L"0"),
									CharacterStats(L"0",  L"1", L"1", L"0", L"5", L"0", L"3", L"0", L"0", L"0")),

		Class(L"Grappler",			CharacterStats(L"32", L"6", L"17", L"8", L"12", L"14", L"10", L"14", L"7", L"0"),
									CharacterStats(L"2",  L"2", L"1", L"0", L"3", L"3", L"0", L"1", L"-1", L"0")),

		Class(L"Warlock",			CharacterStats(L"30", L"4", L"8", L"17", L"12", L"14", L"10", L"12", L"15", L"0"),
									CharacterStats(L"0",  L"0", L"0", L"3", L"1", L"1", L"0", L"0", L"4", L"0")),

		Class(L"Dark Bishop",		CharacterStats(L"30", L"4", L"8", L"17", L"12", L"14", L"10", L"12", L"15", L"0"),
									CharacterStats(L"0",  L"0", L"0", L"4", L"2", L"0", L"0", L"3", L"0", L"0")),

		Class(L"Bishop",			CharacterStats(L"30", L"4", L"8", L"15", L"12", L"14", L"10", L"12", L"15", L"0"),
									CharacterStats(L"1",  L"0", L"0", L"2", L"1", L"1", L"0", L"0", L"5", L"0")),

		Class(L"Falcon Knight",		CharacterStats(L"32", L"8", L"18", L"10", L"14", L"20", L"12", L"13", L"14", L"0"),
									CharacterStats(L"0",  L"2", L"1", L"0", L"4", L"2", L"0", L"0", L"4", L"0")),

		Class(L"Wyvern Lord",		CharacterStats(L"32", L"8", L"18", L"10", L"14", L"20", L"12", L"15", L"12", L"0"),
									CharacterStats(L"2",  L"2", L"2", L"0", L"1", L"2", L"0", L"3", L"0", L"0")),

		Class(L"Mortal Savant",		CharacterStats(L"32", L"6", L"17", L"17", L"14", L"16", L"12", L"14", L"12", L"0"),
									CharacterStats(L"1",  L"2", L"1", L"2", L"1", L"1", L"0", L"2", L"2", L"0")),

		Class(L"Great Knight",		CharacterStats(L"34", L"7", L"18", L"10", L"14", L"10", L"12", L"17", L"10", L"0"),
									CharacterStats(L"5",  L"3", L"1", L"0", L"0", L"-2", L"0", L"2", L"0", L"0")),

		Class(L"Bow Knight",		CharacterStats(L"32", L"8", L"17", L"10", L"14", L"16", L"12", L"14", L"10", L"0"),
									CharacterStats(L"2",  L"2", L"1", L"0", L"3", L"-2", L"1", L"1", L"0", L"0")),

		Class(L"Dark Knight",		CharacterStats(L"32", L"7", L"10", L"17", L"14", L"16", L"12", L"13", L"15", L"0"),
									CharacterStats(L"1",  L"1", L"1", L"2", L"2", L"-2", L"0", L"1", L"3", L"0")),

		Class(L"Holy Knight",		CharacterStats(L"32", L"7", L"8", L"15", L"14", L"16", L"12", L"13", L"16", L"0"),
									CharacterStats(L"2",  L"1", L"1", L"1", L"2", L"-2", L"0", L"1", L"4", L"0")),

		Class(L"War Master",		CharacterStats(L"33", L"6", L"20", L"10", L"14", L"16", L"12", L"15", L"10", L"0"),
									CharacterStats(L"3",  L"2", L"5", L"0", L"0", L"2", L"1", L"1", L"0", L"0")),

		Class(L"Gremory",			CharacterStats(L"32", L"5", L"8", L"17", L"14", L"16", L"12", L"13", L"16", L"0"),
									CharacterStats(L"0",  L"1", L"0", L"5", L"2", L"1", L"0", L"0", L"4", L"2")),

		Class(L"Trickster",			CharacterStats(L"28", L"5", L"14", L"12", L"10", L"14", L"12", L"10", L"10", L"0"),
									CharacterStats(L"0", L"1", L"0", L"0", L"3", L"4", L"3", L"0", L"1", L"0")),

		Class(L"War Monk/Cleric",	CharacterStats(L"32", L"6", L"17", L"10", L"10", L"10", L"10", L"14", L"11", L"0"),
									CharacterStats(L"3", L"2", L"2", L"0", L"1", L"0", L"0", L"1", L"1", L"0")),

		Class(L"Dark Flier",		CharacterStats(L"25", L"7", L"8", L"6", L"7", L"8", L"8", L"5", L"4", L"0"),
									CharacterStats(L"0", L"2", L"0", L"0", L"3", L"2", L"0", L"0", L"3", L"0")),

		Class(L"Valkyrie",			CharacterStats(L"20", L"6", L"5", L"10", L"10", L"9", L"9", L"9", L"13", L"0"),
									CharacterStats(L"1", L"2", L"0", L"4", L"0", L"-2", L"0", L"1", L"2", L"0")),

		Class(L"Death Knight",		CharacterStats(L"32", L"7", L"10", L"17", L"14", L"16", L"12", L"13", L"15", L"0"),
									CharacterStats(L"5", L"2", L"1", L"0", L"0", L"-2", L"0", L"1", L"3", L"0")),


	};

public:

	int getSize() const {
		return classlist.size();
	}

	Class getClass(UINT pos) {
		return classlist[pos];
	}

	Class getClassPtr(UINT pos) const {
		return classlist[pos];
	}

	std::unique_ptr<CharacterStats> getSelClassStats(HWND hwnd, HWND& listboxclasses) const {
		std::unique_ptr<CharacterStats> selStats = std::make_unique<CharacterStats>();
		int pos = ListBox_GetCurSel(listboxclasses);
		int len = ListBox_GetTextLen(listboxclasses, pos);				//get length of text in new current selection
		const wchar_t* buffer = new const wchar_t[len];						//buffer variable 
		ListBox_GetText(listboxclasses, pos, buffer);						//get text located in new current selection

		for (int i = 0; i < getSize(); i++) {
			Class cLass = getClassPtr(i);

			std::wstring name = cLass.getName();

			if (name.compare(buffer) == 0) {
				CharacterStats characterstats;

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