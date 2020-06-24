#ifndef WEAPON_H
#define WEAPON_H
class Weapon
{
protected:
	std::wstring name;
	WeaponStats weaponstats;
public:
	Weapon() {}
	Weapon(std::wstring uName, WeaponStats uStats) {
		setName(uName);
		setStats(uStats);
	}

	void setName(std::wstring change) { name = change; }
	void setStats(WeaponStats change) { weaponstats = change; }

	std::wstring getName() { return name; }
	WeaponStats getStats() { return weaponstats; }
};

#endif