#ifndef STATCALCULATOR_H
#define STATCALCULATOR_H
class StatCalculator
{
protected:
	Stats		studentstats;
	WeaponStats weaponstats;
	TotalStats	totalstats;
public:
	StatCalculator(){
		studentstats = Stats(L"0", L"0", L"0", L"0", L"0", L"0", L"0", L"0", L"0", L"0");
		weaponstats = WeaponStats(L"0", L"0", L"0", L"0", L"0", L"0", L"0");
	}
	void setStats(Stats* stats, WeaponStats* wpnstats) {
		if (stats != nullptr){
			studentstats.setAllStats(stats->extractStatText(0), stats->extractStatText(1), stats->extractStatText(2),
									stats->extractStatText(3), stats->extractStatText(4), stats->extractStatText(5), 
									stats->extractStatText(6), stats->extractStatText(7), stats->extractStatText(8), stats->extractStatText(9));
		}

		if (wpnstats != nullptr) {
			weaponstats.setAllStats(wpnstats->extractStatText(0), wpnstats->extractStatText(1), wpnstats->extractStatText(2),
									wpnstats->extractStatText(3), wpnstats->extractStatText(4), wpnstats->extractStatText(5),
									wpnstats->extractStatText(6));
		}
	}

	std::wstring CalculateTotalPhysicalAttack() {
		std::wstring temp = std::to_wstring(std::stoi(studentstats.extractStatText(2))
										  + std::stoi(weaponstats.extractStatText(0))
											/*+ ifEffective(Weapon Might x3)
											+ Combat Art 
											+ Skills 
											+/- Battalions 
											+ Linked attacks 
											+/- Terrain Effects 
											- Enemies Protection*/);
		return temp;
	}
	std::wstring CalculateTotalMagicAttack() {
		std::wstring temp = std::to_wstring (std::stoi(studentstats.extractStatText(3))
										   + std::stoi(weaponstats.extractStatText(0))
											/*+ ifEffective(Weapon Might x3)
											+ Combat Art
											+ Skills
											+/- Battalions
											+ Staves
											+ Linked attacks
											+/- Terrain Effects
											- Enemies Resilience*/);
		return temp;
	}
	std::wstring CalculateTotalPhysicalHit() {
		std::wstring temp = std::to_wstring(std::stoi(studentstats.extractStatText(4))
										  + std::stoi(weaponstats.extractStatText(1))
										/*+ Combat Art
										+ Skills
										+/- Battalions
										+ Linked attacks
										+/- Terrain Effects
										- Enemies Avoid*/);
		return temp;
	}
	std::wstring CalculateTotalMagicHit() {
		std::wstring temp = std::to_wstring ((std::stoi(studentstats.extractStatText(4)) / 2)
										   + (std::stoi(studentstats.extractStatText(6)) / 2)
											+ std::stoi(weaponstats.extractStatText(1))
										/*+ Skills
										+/- Battalions
										+ Linked attacks
										- Enemies Magic Avoid*/);
		return temp;
	}
	std::wstring CalculateTotalCrit() {
		std::wstring temp = std::to_wstring(((std::stoi(studentstats.extractStatText(4)) + std::stoi(studentstats.extractStatText(6))) / 2)
										    + std::stoi(weaponstats.extractStatText(2))
											/*+Skills*/);
		return temp;
	}
	std::wstring CalculateAS() {
		std::wstring temp = std::to_wstring(std::stoi(studentstats.extractStatText(5))
										+ ((std::stoi(weaponstats.extractStatText(4)) - std::stoi(weaponstats.extractStatText(2))) / 5));
		return temp;
	}
	std::wstring CalculateTotalProt() {
		std::wstring temp = std::to_wstring(std::stoi(studentstats.extractStatText(7))
											/*+/- Battalions
											+ Equipment*/);
		return temp;
	}
	std::wstring CalculateTotalResilience() {
		std::wstring temp = std::to_wstring(std::stoi(studentstats.extractStatText(8))
											/*+/- Battalions
											+ Equipment*/);
		return temp;
	}
	std::wstring CalculateTotalAvoid() {
		std::wstring temp = std::to_wstring(std::stoi(CalculateAS())
											/*+ Skills 
											+/- Battalions
											+/- Terrain Effects*/);
		return temp;
	}
	std::wstring CalculateTotalCritAvoid() {
		std::wstring temp = std::to_wstring(std::stoi(weaponstats.extractStatText(2))
										  - std::stoi(studentstats.extractStatText(6)));
		return temp;
	}
	std::wstring CalculateTotalRange() {
		return weaponstats.extractStatText(3);
	}
};

#endif