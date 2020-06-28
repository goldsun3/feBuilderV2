#ifndef WEAPONTYPELIST_H
#define WEAPONTYPELIST_H
class WeaponTypeList : public WeaponType {
protected:
	std::vector<WeaponType> weapontypelist = {
		WeaponType (L"Sword"),
		WeaponType (L"Lance"),
		WeaponType (L"Axe"),
		WeaponType (L"Bow"),
		WeaponType (L"Gauntlets"),
		WeaponType (L"Black Magic"),
		WeaponType (L"Dark Magic"),
		WeaponType (L"White Magic")
	};
public:
	WeaponTypeList() {}
	int getSize() const {
		return weapontypelist.size();
	}

	WeaponType getWeaponType(UINT pos) {
		return weapontypelist[pos];
	}

	WeaponType getWeaponTypePtr(UINT pos) const {
		return weapontypelist[pos];
	}
};

#endif