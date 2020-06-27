#ifndef STUDENTLIST_H
#define STUDENTLIST_H

class StudentList {
protected:
	std::vector<Student> studentlist = {
		Student(L"Byleth",	   CharacterStats(L"27", L"4", L"13",L"6",  L"9", L"8", L"8", L"6", L"6", L"7")),
		Student(L"Hubert",	   CharacterStats(L"22", L"4", L"6", L"12", L"6", L"7", L"6", L"4", L"7", L"8")),
		Student(L"Linhardt",   CharacterStats(L"24", L"4", L"5", L"10", L"6", L"5", L"7", L"5", L"9", L"3")),
		Student(L"Caspar",     CharacterStats(L"26", L"4", L"9", L"3",  L"5", L"6", L"8", L"6", L"2", L"4")),
		Student(L"Bernadetta", CharacterStats(L"25", L"4", L"8", L"5",  L"7", L"7", L"5", L"4", L"2", L"6")),
		Student(L"Dorothea",   CharacterStats(L"24", L"4", L"5", L"11", L"6", L"7", L"6", L"4", L"7", L"8")),
		Student(L"Petra",	   CharacterStats(L"25", L"4", L"9", L"3",  L"7", L"10",L"7", L"5", L"2", L"6")),
		Student(L"Dimitri",    CharacterStats(L"28", L"4", L"12",L"4",  L"7", L"7", L"5", L"7", L"4", L"9")),
		Student(L"Dedue",	   CharacterStats(L"30", L"4", L"12",L"2",  L"5", L"7", L"5", L"8", L"1", L"4")),
		Student(L"Felix",	   CharacterStats(L"26", L"4", L"10",L"5",  L"6", L"9", L"5", L"5", L"3", L"5")),
		Student(L"Ashe",	   CharacterStats(L"23", L"4", L"8", L"5",  L"8", L"9", L"6", L"5", L"6", L"5")),
		Student(L"Sylvain",	   CharacterStats(L"27", L"4", L"9", L"5",  L"5", L"8", L"6", L"6", L"2", L"7")),
		Student(L"Mercedes",   CharacterStats(L"25", L"4", L"6", L"10", L"6", L"8", L"5", L"5", L"9", L"8")),
		Student(L"Annette",	   CharacterStats(L"23", L"4", L"6", L"11", L"7", L"7", L"6", L"5", L"4", L"6")),
		Student(L"Ingrid",	   CharacterStats(L"27", L"4", L"8", L"6",  L"6", L"8", L"6", L"5", L"8", L"8")),
		Student(L"Claude",	   CharacterStats(L"26", L"4", L"11",L"5",  L"8", L"8", L"7", L"6", L"4", L"8")),
		Student(L"Lorenz",	   CharacterStats(L"28", L"4", L"8", L"7",  L"6", L"7", L"5", L"6", L"6", L"3")),
		Student(L"Raphael",	   CharacterStats(L"30", L"4", L"11",L"3",  L"5", L"6", L"6", L"7", L"1", L"4")),
		Student(L"Ignatz",	   CharacterStats(L"25", L"4", L"8", L"5",  L"7", L"8", L"8", L"4", L"6", L"4")),
		Student(L"Lysithea",   CharacterStats(L"22", L"4", L"4", L"11", L"7", L"7", L"4", L"3", L"4", L"5")),
		Student(L"Marianne",   CharacterStats(L"23", L"4", L"5", L"11", L"6", L"7", L"6", L"4", L"8", L"7")),
		Student(L"Hilda",	   CharacterStats(L"29", L"4", L"10",L"5",  L"5", L"8", L"6", L"6", L"3", L"7")),
		Student(L"Leonie",	   CharacterStats(L"26", L"4", L"9", L"5",  L"8", L"9", L"6", L"7", L"2", L"7")),
		Student(L"Flayn",	   CharacterStats(L"24", L"4", L"6", L"9",  L"6", L"5", L"4", L"5", L"10",L"9")),
		Student(L"Hanneman",   CharacterStats(L"25", L"4", L"6", L"10", L"6", L"6", L"4", L"5", L"7", L"5")),
		Student(L"Manuela",	   CharacterStats(L"26", L"4", L"10",L"8",  L"6", L"8", L"6", L"5", L"4", L"7")),
		Student(L"Gilbert",	   CharacterStats(L"30", L"4", L"9", L"4",  L"6", L"5", L"4", L"5", L"2", L"6")),
		Student(L"Alois",	   CharacterStats(L"28", L"4", L"9", L"4",  L"5", L"6", L"5", L"5", L"2", L"7")),
		Student(L"Catherine",  CharacterStats(L"27", L"4", L"8", L"5",  L"6", L"7", L"6", L"5", L"2", L"4")),
		Student(L"Shamir",	   CharacterStats(L"26", L"4", L"8", L"4",  L"7", L"6", L"8", L"5", L"2", L"6")),
		Student(L"Cyril",	   CharacterStats(L"24", L"4", L"7", L"4",  L"6", L"6", L"6", L"5", L"2", L"4")),
		Student(L"Jeritza",	   CharacterStats(L"30", L"4", L"8", L"6",  L"6", L"8", L"4", L"7", L"5", L"3")),
		Student(L"Anna",	   CharacterStats(L"26", L"4", L"7", L"7",  L"7", L"7", L"7", L"5", L"7", L"7")),
		Student(L"Yuri",	   CharacterStats(L"24", L"4", L"10",L"6",  L"7", L"9", L"7", L"5", L"7", L"8")),
		Student(L"Balthus",    CharacterStats(L"28", L"4", L"11",L"5",  L"4", L"7", L"3", L"7", L"4", L"4")),
		Student(L"Constance",  CharacterStats(L"23", L"4", L"5", L"11", L"6", L"6", L"4", L"3", L"4", L"6")),
		Student(L"Hapi",	   CharacterStats(L"26", L"4", L"6", L"11", L"8", L"6", L"4", L"4", L"7", L"4")) };


public:
	StudentList() {}

	int getSize() const { return studentlist.size(); }
	Student getStudent(UINT pos) { return studentlist[pos]; }
	Student getStudentPtr(UINT pos) const { return studentlist[pos]; }

	std::unique_ptr<CharacterStats> getSelStudStats(HWND& listboxcharnames) {
		std::unique_ptr<CharacterStats> selStats = std::make_unique<CharacterStats>();
		int pos = ListBox_GetCurSel(listboxcharnames);
		int len = ListBox_GetTextLen(listboxcharnames, pos);				//get length of text in new current selection
		const wchar_t* buffer = new const wchar_t[len];						//buffer variable 
		ListBox_GetText(listboxcharnames, pos, buffer);						//get text located in new current selection;

		for (int i = 0; i < getSize(); i++) {
			Student student = getStudentPtr(i);

			std::wstring name = student.getName();
			if (name.compare(buffer) == 0) {
				*selStats = student.getStats();
				return selStats;
				break;
			}
		}
	}
};

#endif