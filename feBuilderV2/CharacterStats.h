#ifndef CHARACTERSTATS_H
#define CHARACTERSTATS_H
class CharacterStats : public StatsTemplate{
protected:
	//HP, MOVEMENT, STRENGTH, MAGIC, DEXTERITY, SPEED, LUCK, DEFENSE, RESISTANCE, CHARM
	bool base = true;
public:
	CharacterStats() : StatsTemplate() {}
	CharacterStats(std::wstring uHP, std::wstring uMOV, std::wstring uSTR,
					std::wstring uMAG, std::wstring uDEX, std::wstring uSPD,
					std::wstring uLCK, std::wstring uDEF, std::wstring uRES,
					std::wstring uCHA) : 
		StatsTemplate(uHP, uMOV, uSTR, 
						uMAG, uDEX, uSPD, 
						uLCK, uDEF, uRES, 
						uCHA) 
	{}

	void setBase(bool change) { base = change; }
	bool getBase() { return base; }
};

#endif