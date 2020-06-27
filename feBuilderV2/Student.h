#ifndef STUDENT_H
#define STUDENT_H

class Student
{
protected:
	std::wstring name = L"";
	CharacterStats stats;
	Class cLass;
	//Crest		 crest;
	//Skills	 skills;

	//Abilities  abilities;
	//Arts       arts;
	//Spells	 spells;
public:
	Student() {}
	Student(std::wstring uNAME, CharacterStats uALLSTATS) {
		setName(uNAME);
		setStats(uALLSTATS);
	}

	void setName(std::wstring uNAME) { name = uNAME; }
	void setStats(CharacterStats uALLSTATS) { stats = uALLSTATS; }

	std::wstring getName() { return name; }
	CharacterStats getStats() { return stats; }
};

#endif