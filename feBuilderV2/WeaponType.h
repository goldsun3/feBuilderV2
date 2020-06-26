#ifndef WEAPONTYPE_H
#define WEAPONTYPE_H
class WeaponType{
protected:
	std::wstring weapontype = L"";
public:
	WeaponType() { weapontype = L""; }
	WeaponType(std::wstring uWeaponType) { weapontype = uWeaponType; }

	void setWeaponType(std::wstring change) { weapontype = change; }

	std::wstring getWeaponType() { return weapontype; }
};

#endif