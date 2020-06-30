#ifndef CHARACTERLIST_H
#define CHARACTERLIST_H

class CharacterList : public Character{
protected:
	std::vector<Character> characterlist = {
		Character(L"Byleth",	   L"27", L"4", L"13",L"6",  L"9", L"8", L"8", L"6", L"6", L"7"),
		Character(L"Hubert",	   L"22", L"4", L"6", L"12", L"6", L"7", L"6", L"4", L"7", L"8"),
		Character(L"Linhardt",   L"24", L"4", L"5", L"10", L"6", L"5", L"7", L"5", L"9", L"3"),
		Character(L"Caspar",     L"26", L"4", L"9", L"3",  L"5", L"6", L"8", L"6", L"2", L"4"),
		Character(L"Bernadetta", L"25", L"4", L"8", L"5",  L"7", L"7", L"5", L"4", L"2", L"6"),
		Character(L"Dorothea",   L"24", L"4", L"5", L"11", L"6", L"7", L"6", L"4", L"7", L"8"),
		Character(L"Petra",	   L"25", L"4", L"9", L"3",  L"7", L"10",L"7", L"5", L"2", L"6"),
		Character(L"Dimitri",    L"28", L"4", L"12",L"4",  L"7", L"7", L"5", L"7", L"4", L"9"),
		Character(L"Dedue",	   L"30", L"4", L"12",L"2",  L"5", L"7", L"5", L"8", L"1", L"4"),
		Character(L"Felix",	   L"26", L"4", L"10",L"5",  L"6", L"9", L"5", L"5", L"3", L"5"),
		Character(L"Ashe",	   L"23", L"4", L"8", L"5",  L"8", L"9", L"6", L"5", L"6", L"5"),
		Character(L"Sylvain",	   L"27", L"4", L"9", L"5",  L"5", L"8", L"6", L"6", L"2", L"7"),
		Character(L"Mercedes",   L"25", L"4", L"6", L"10", L"6", L"8", L"5", L"5", L"9", L"8"),
		Character(L"Annette",	   L"23", L"4", L"6", L"11", L"7", L"7", L"6", L"5", L"4", L"6"),
		Character(L"Ingrid",	   L"27", L"4", L"8", L"6",  L"6", L"8", L"6", L"5", L"8", L"8"),
		Character(L"Claude",	   L"26", L"4", L"11",L"5",  L"8", L"8", L"7", L"6", L"4", L"8"),
		Character(L"Lorenz",	   L"28", L"4", L"8", L"7",  L"6", L"7", L"5", L"6", L"6", L"3"),
		Character(L"Raphael",	   L"30", L"4", L"11",L"3",  L"5", L"6", L"6", L"7", L"1", L"4"),
		Character(L"Ignatz",	   L"25", L"4", L"8", L"5",  L"7", L"8", L"8", L"4", L"6", L"4"),
		Character(L"Lysithea",   L"22", L"4", L"4", L"11", L"7", L"7", L"4", L"3", L"4", L"5"),
		Character(L"Marianne",   L"23", L"4", L"5", L"11", L"6", L"7", L"6", L"4", L"8", L"7"),
		Character(L"Hilda",	   L"29", L"4", L"10",L"5",  L"5", L"8", L"6", L"6", L"3", L"7"),
		Character(L"Leonie",	   L"26", L"4", L"9", L"5",  L"8", L"9", L"6", L"7", L"2", L"7"),
		Character(L"Flayn",	   L"24", L"4", L"6", L"9",  L"6", L"5", L"4", L"5", L"10",L"9"),
		Character(L"Hanneman",   L"25", L"4", L"6", L"10", L"6", L"6", L"4", L"5", L"7", L"5"),
		Character(L"Manuela",	   L"26", L"4", L"10",L"8",  L"6", L"8", L"6", L"5", L"4", L"7"),
		Character(L"Gilbert",	   L"30", L"4", L"9", L"4",  L"6", L"5", L"4", L"5", L"2", L"6"),
		Character(L"Alois",	   L"28", L"4", L"9", L"4",  L"5", L"6", L"5", L"5", L"2", L"7"),
		Character(L"Catherine",  L"27", L"4", L"8", L"5",  L"6", L"7", L"6", L"5", L"2", L"4"),
		Character(L"Shamir",	   L"26", L"4", L"8", L"4",  L"7", L"6", L"8", L"5", L"2", L"6"),
		Character(L"Cyril",	   L"24", L"4", L"7", L"4",  L"6", L"6", L"6", L"5", L"2", L"4"),
		Character(L"Jeritza",	   L"30", L"4", L"8", L"6",  L"6", L"8", L"4", L"7", L"5", L"3"),
		Character(L"Anna",	   L"26", L"4", L"7", L"7",  L"7", L"7", L"7", L"5", L"7", L"7"),
		Character(L"Yuri",	   L"24", L"4", L"10",L"6",  L"7", L"9", L"7", L"5", L"7", L"8"),
		Character(L"Balthus",    L"28", L"4", L"11",L"5",  L"4", L"7", L"3", L"7", L"4", L"4"),
		Character(L"Constance",  L"23", L"4", L"5", L"11", L"6", L"6", L"4", L"3", L"4", L"6"),
		Character(L"Hapi",	   L"26", L"4", L"6", L"11", L"8", L"6", L"4", L"4", L"7", L"4") };
public:
	CharacterList() : Character() {}

	int getSize() const { return characterlist.size(); }
	Character getCharacter(UINT pos) { return characterlist[pos]; }
	Character getCharacterPtr(UINT pos) const { return characterlist[pos]; }

	std::unique_ptr<std::vector<Stat>> getSelStudStats(HWND listboxcharnames) {
		std::unique_ptr<std::vector<Stat>> selStats = std::make_unique<std::vector<Stat>>();
		int pos = ListBox_GetCurSel(listboxcharnames);
		int len = ListBox_GetTextLen(listboxcharnames, pos);
		const wchar_t* buffer = new const wchar_t[++len];
		ListBox_GetText(listboxcharnames, pos, buffer);

		for (int i = 0; i < getSize(); i++) {
			Character character = getCharacterPtr(i);

			std::wstring name = character.getName();
			if (name.compare(buffer) == 0) {
				*selStats = character.getAllStats();
				delete[] buffer;
				return selStats;
			}
		}

		return selStats;
	}
};

#endif