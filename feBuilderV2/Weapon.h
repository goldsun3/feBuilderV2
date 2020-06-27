#ifndef WEAPON_H
#define WEAPON_H
class Weapon : public WeaponStats, public WeaponType{
protected:
	std::wstring name = L"";
public:
	Weapon() : WeaponStats(), WeaponType() {}
	Weapon(std::wstring uName, std::wstring uWeaponType, std::wstring uMight, std::wstring uHit, std::wstring uCrit,
			std::wstring uRange, std::wstring uWeight, std::wstring uSkillLVL,
			std::wstring uUses) : 
		WeaponStats(uMight, uHit, uCrit,
					uRange, uWeight, uSkillLVL,
					uUses), 
		WeaponType(uWeaponType)
	{
		setName(uName);
	}

	void setName(std::wstring change) { name = change; }

	std::wstring getName() { return name; }
};

#endif