#ifndef CLASS_H
#define CLASS_H
class Class
{
protected:
	std::wstring name;
	Stats base;
	Stats boosted;
	//GrowthRate gr;
	//skill level bonuses
	//ability unlocks
	//art unlocks
	//which tier within class hierarchy class it is in
public:
	Class() {}
	Class(std::wstring uName, Stats uStats, Stats uBoosted) {
		setName(uName);
		setBase(uStats);
		setBoosted(uBoosted);
	}

	void setName(std::wstring change) { name = change; }
	void setBase(Stats change) { base = change; }
	void setBoosted(Stats change) { boosted = change; }

	std::wstring getName() { return name; }
	Stats getBase() { return base; }
	Stats getBoosted() { return boosted; }
};

#endif