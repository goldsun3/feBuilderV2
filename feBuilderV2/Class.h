#ifndef CLASS_H
#define CLASS_H
class Class
{
protected:
	std::wstring name = L"";
	CharacterStats base;
	CharacterStats boosted;
	//GrowthRate gr;
	//skill level bonuses
	//ability unlocks
	//art unlocks
	//which tier within class hierarchy class it is in
public:
	Class() {}
	Class(std::wstring uName, CharacterStats uStats, CharacterStats uBoosted) {
		setName(uName);
		setBase(uStats);
		setBoosted(uBoosted);
	}

	void setName(std::wstring change) { name = change; }
	void setBase(CharacterStats change) { base = change; }
	void setBoosted(CharacterStats change) { boosted = change; }

	std::wstring getName() { return name; }
	CharacterStats getBase() { return base; }
	CharacterStats getBoosted() { return boosted; }
};

#endif