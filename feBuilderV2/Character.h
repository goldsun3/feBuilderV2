#ifndef CHARACTER_H
#define CHARACTER_H

class Character : public CharacterStats{
protected:
	std::wstring name = L"";
	//Crest		 crest;
	//Skills	 skills;

	//Abilities  abilities;
	//Arts       arts;
	//Spells	 spells;
public:
	Character() {}
	Character(std::wstring uNAME, std::wstring uHP, std::wstring uMOV, 
				std::wstring uSTR, std::wstring uMAG, std::wstring uDEX, 
				std::wstring uSPD, std::wstring uLCK, std::wstring uDEF, 
				std::wstring uRES, std::wstring uCHA) :
		CharacterStats(uHP, uMOV, uSTR,
						uMAG, uDEX, uSPD,
						uLCK, uDEF, uRES,
						uCHA)
	{
		setName(uNAME);
	}

	void setName(std::wstring uNAME) { name = uNAME; }
	std::wstring getName() { return name; }
};

#endif