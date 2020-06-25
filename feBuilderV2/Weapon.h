#ifndef WEAPON_H
#define WEAPON_H
class Weapon
{
protected:
	std::wstring name;
	std::wstring weapontype;
	WeaponStats weaponstats;
public:
	Weapon() {}
	Weapon(std::wstring uName, std::wstring uWeaponType, WeaponStats uStats) {
		setName(uName);
		setWeaponType(uWeaponType);
		setStats(uStats);
	}

	void setName(std::wstring change) { name = change; }
	void setWeaponType(std::wstring change) { weapontype = change; }
	void setStats(WeaponStats change) { weaponstats = change; }

	std::wstring getName() { return name; }
	std::wstring getWeaponType() { return weapontype; }
	WeaponStats getStats() { return weaponstats; }
};

#endif