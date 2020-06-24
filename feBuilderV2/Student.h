#ifndef STUDENT_H
#define STUDENT_H

class Student
{
protected:
	std::wstring name = L"";
	Stats		 stats;
	Class		 cLass;
	//Crest		 crest;
	//Skills	 skills;

	//Abilities  abilities;
	//Arts       arts;
	//Spells	 spells;
public:
	Student() {}

	Student(std::wstring uNAME, Stats uALLSTATS) {
		setName(uNAME);
		setStats(uALLSTATS);
	}

	void setName(std::wstring uNAME) { name = uNAME; }
	void setStats(Stats uALLSTATS) { stats = uALLSTATS; }
	std::wstring getName() { return name; }
	Stats getStats() { return stats; }
};

#endif