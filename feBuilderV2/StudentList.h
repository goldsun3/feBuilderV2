#ifndef STUDENTLIST_H
#define STUDENTLIST_H

class StudentList {
protected:
	std::vector<Student> studentlist = {
		Student(L"Byleth",	   Stats(L"27", L"4", L"13",L"6",  L"9", L"8", L"8", L"6", L"6", L"7")),
		Student(L"Hubert",	   Stats(L"22", L"4", L"6", L"12", L"6", L"7", L"6", L"4", L"7", L"8")),
		Student(L"Linhardt",   Stats(L"24", L"4", L"5", L"10", L"6", L"5", L"7", L"5", L"9", L"3")),
		Student(L"Caspar",     Stats(L"26", L"4", L"9", L"3",  L"5", L"6", L"8", L"6", L"2", L"4")),
		Student(L"Bernadetta", Stats(L"25", L"4", L"8", L"5",  L"7", L"7", L"5", L"4", L"2", L"6")),
		Student(L"Dorothea",   Stats(L"24", L"4", L"5", L"11", L"6", L"7", L"6", L"4", L"7", L"8")),
		Student(L"Petra",	   Stats(L"25", L"4", L"9", L"3",  L"7", L"10",L"7", L"5", L"2", L"6")),
		Student(L"Dimitri",    Stats(L"28", L"4", L"12",L"4",  L"7", L"7", L"5", L"7", L"4", L"9")),
		Student(L"Dedue",	   Stats(L"30", L"4", L"12",L"2",  L"5", L"7", L"5", L"8", L"1", L"4")),
		Student(L"Felix",	   Stats(L"26", L"4", L"10",L"5",  L"6", L"9", L"5", L"5", L"3", L"5")),
		Student(L"Ashe",	   Stats(L"23", L"4", L"8", L"5",  L"8", L"9", L"6", L"5", L"6", L"5")),
		Student(L"Sylvain",	   Stats(L"27", L"4", L"9", L"5",  L"5", L"8", L"6", L"6", L"2", L"7")),
		Student(L"Mercedes",   Stats(L"25", L"4", L"6", L"10", L"6", L"8", L"5", L"5", L"9", L"8")),
		Student(L"Annette",	   Stats(L"23", L"4", L"6", L"11", L"7", L"7", L"6", L"5", L"4", L"6")),
		Student(L"Ingrid",	   Stats(L"27", L"4", L"8", L"6",  L"6", L"8", L"6", L"5", L"8", L"8")),
		Student(L"Claude",	   Stats(L"26", L"4", L"11",L"5",  L"8", L"8", L"7", L"6", L"4", L"8")),
		Student(L"Lorenz",	   Stats(L"28", L"4", L"8", L"7",  L"6", L"7", L"5", L"6", L"6", L"3")),
		Student(L"Raphael",	   Stats(L"30", L"4", L"11",L"3",  L"5", L"6", L"6", L"7", L"1", L"4")),
		Student(L"Ignatz",	   Stats(L"25", L"4", L"8", L"5",  L"7", L"8", L"8", L"4", L"6", L"4")),
		Student(L"Lysithea",   Stats(L"22", L"4", L"4", L"11", L"7", L"7", L"4", L"3", L"4", L"5")),
		Student(L"Marianne",   Stats(L"23", L"4", L"5", L"11", L"6", L"7", L"6", L"4", L"8", L"7")),
		Student(L"Hilda",	   Stats(L"29", L"4", L"10",L"5",  L"5", L"8", L"6", L"6", L"3", L"7")),
		Student(L"Leonie",	   Stats(L"26", L"4", L"9", L"5",  L"8", L"9", L"6", L"7", L"2", L"7")),
		Student(L"Flayn",	   Stats(L"24", L"4", L"6", L"9",  L"6", L"5", L"4", L"5", L"10",L"9")),
		Student(L"Hanneman",   Stats(L"25", L"4", L"6", L"10", L"6", L"6", L"4", L"5", L"7", L"5")),
		Student(L"Manuela",	   Stats(L"26", L"4", L"10",L"8",  L"6", L"8", L"6", L"5", L"4", L"7")),
		Student(L"Gilbert",	   Stats(L"30", L"4", L"9", L"4",  L"6", L"5", L"4", L"5", L"2", L"6")),
		Student(L"Alois",	   Stats(L"28", L"4", L"9", L"4",  L"5", L"6", L"5", L"5", L"2", L"7")),
		Student(L"Catherine",  Stats(L"27", L"4", L"8", L"5",  L"6", L"7", L"6", L"5", L"2", L"4")),
		Student(L"Shamir",	   Stats(L"26", L"4", L"8", L"4",  L"7", L"6", L"8", L"5", L"2", L"6")),
		Student(L"Cyril",	   Stats(L"24", L"4", L"7", L"4",  L"6", L"6", L"6", L"5", L"2", L"4")),
		Student(L"Jeritza",	   Stats(L"30", L"4", L"8", L"6",  L"6", L"8", L"4", L"7", L"5", L"3")),
		Student(L"Anna",	   Stats(L"26", L"4", L"7", L"7",  L"7", L"7", L"7", L"5", L"7", L"7")),
		Student(L"Yuri",	   Stats(L"24", L"4", L"10",L"6",  L"7", L"9", L"7", L"5", L"7", L"8")),
		Student(L"Balthus",    Stats(L"28", L"4", L"11",L"5",  L"4", L"7", L"3", L"7", L"4", L"4")),
		Student(L"Constance",  Stats(L"23", L"4", L"5", L"11", L"6", L"6", L"4", L"3", L"4", L"6")),
		Student(L"Hapi",	   Stats(L"26", L"4", L"6", L"11", L"8", L"6", L"4", L"4", L"7", L"4")) };


public:
	StudentList() {}

	int getSize() const { return studentlist.size(); }
	Student getStudent(UINT pos) { return studentlist[pos]; }
	Student getStudentPtr(UINT pos) const { return studentlist[pos]; }

	std::unique_ptr<Stats> getSelStudStats(HWND& listboxcharnames) {
		std::unique_ptr<Stats> selStats = std::make_unique<Stats>();
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