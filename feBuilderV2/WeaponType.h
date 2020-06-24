#ifndef WEAPONTYPE_H
#define WEAPONTYPE_H
class WeaponType
{
protected:
	std::wstring weaponType;
public:
	WeaponType() {}
	WeaponType(std::wstring uWeaponType) {
		setWeaponType(uWeaponType);
	}

	void setWeaponType(std::wstring change) { weaponType = change; }
	std::wstring getWeaponType() { return weaponType; }

};

#endif