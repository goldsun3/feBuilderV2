#ifndef WEAPONSTATS_H
#define WEAPONSTATS_H
class WeaponStats : public StatsTemplate{
protected:
	//MIGHT, HIT, CRIT, RANGE, WEIGHT, SKILLLVL, USES
public:
	WeaponStats() : StatsTemplate() {}
	WeaponStats(std::wstring uMight, std::wstring uHit, std::wstring uCrit,
				std::wstring uRange, std::wstring uWeight, std::wstring uSkillLVL,
				std::wstring uUses) : 
		StatsTemplate(uMight, uHit, uCrit,
						uRange, uWeight, uSkillLVL,
						uUses) 
	{}
};

#endif