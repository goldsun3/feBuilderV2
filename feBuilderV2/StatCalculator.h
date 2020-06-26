#ifndef STATCALCULATOR_H
#define STATCALCULATOR_H
class StatCalculator
{
protected:
	Stats		studentstats;
	WeaponStats weaponstats;
	TotalStats	totalstats = { L"0" , L"0" , L"0" , L"0" , L"0" , L"0" , L"0" , L"0" , L"0" , L"0" , L"0" };
public:
	StatCalculator(){
		studentstats = Stats(L"0", L"0", L"0", L"0", L"0", L"0", L"0", L"0", L"0", L"0");
		weaponstats = WeaponStats(L"0", L"0", L"0", L"0", L"0", L"0", L"0");
	}
	void setStats(Stats* stats, WeaponStats* wpnstats) {
		if (stats != nullptr){
			std::vector<Stat> temp = studentstats.getStats();
			temp.at(0).Set(stats->extractStatText(0));
			temp.at(1).Set(stats->extractStatText(1));
			temp.at(2).Set(stats->extractStatText(2));
			temp.at(3).Set(stats->extractStatText(3));
			temp.at(4).Set(stats->extractStatText(4));
			temp.at(5).Set(stats->extractStatText(5));
			temp.at(6).Set(stats->extractStatText(6));
			temp.at(7).Set(stats->extractStatText(7));
			temp.at(8).Set(stats->extractStatText(8));
			temp.at(9).Set(stats->extractStatText(9));
			studentstats.augmentAllStats(temp);
		}

		if (wpnstats != nullptr) {
			std::vector<Stat> temp = weaponstats.getStats();
			temp.at(0).Set(wpnstats->extractStatText(0));
			temp.at(1).Set(wpnstats->extractStatText(1));
			temp.at(2).Set(wpnstats->extractStatText(2));
			temp.at(3).Set(wpnstats->extractStatText(3));
			temp.at(4).Set(wpnstats->extractStatText(4));
			temp.at(5).Set(wpnstats->extractStatText(5));
			temp.at(6).Set(wpnstats->extractStatText(6));
			temp.at(7).Set(wpnstats->extractStatText(7));
			temp.at(8).Set(wpnstats->extractStatText(8));
			temp.at(9).Set(wpnstats->extractStatText(9));
			weaponstats.augmentAllStats(temp);
		}
	}
	void CalculateTotalPhysicalAttack() {
		std::vector<Stat> change = totalstats.getStats();
		std::wstring buffer = std::to_wstring(std::stoi(studentstats.extractStatText(2))
										  + std::stoi(weaponstats.extractStatText(0))
											/*+ ifEffective(Weapon Might x3)
											+ Combat Art 
											+ Skills 
											+/- Battalions 
											+ Linked attacks 
											+/- Terrain Effects 
											- Enemies Protection*/);
		change.at(0).Set(buffer);
		totalstats.augmentAllStats(change);
	}
	void CalculateTotalMagicAttack() {
		std::vector<Stat> change = totalstats.getStats();
		std::wstring buffer = std::to_wstring (std::stoi(studentstats.extractStatText(3))
										   + std::stoi(weaponstats.extractStatText(0))
											/*+ ifEffective(Weapon Might x3)
											+ Combat Art
											+ Skills
											+/- Battalions
											+ Staves
											+ Linked attacks
											+/- Terrain Effects
											- Enemies Resilience*/);
		change.at(1).Set(buffer);
		totalstats.augmentAllStats(change);
	}
	void CalculateTotalPhysicalHit() {
		std::vector<Stat> change = totalstats.getStats();
		std::wstring buffer = std::to_wstring(std::stoi(studentstats.extractStatText(4))
										  + std::stoi(weaponstats.extractStatText(1))
										/*+ Combat Art
										+ Skills
										+/- Battalions
										+ Linked attacks
										+/- Terrain Effects
										- Enemies Avoid*/);
		change.at(2).Set(buffer);
		totalstats.augmentAllStats(change);
	}
	void CalculateTotalMagicHit() {
		std::vector<Stat> change = totalstats.getStats();
		std::wstring buffer = std::to_wstring ((std::stoi(studentstats.extractStatText(4)) / 2)
										   + (std::stoi(studentstats.extractStatText(6)) / 2)
											+ std::stoi(weaponstats.extractStatText(1))
										/*+ Skills
										+/- Battalions
										+ Linked attacks
										- Enemies Magic Avoid*/);
		change.at(3).Set(buffer);
		totalstats.augmentAllStats(change);
	}
	void CalculateTotalCrit() {
		std::vector<Stat> change = totalstats.getStats();
		std::wstring buffer = std::to_wstring(((std::stoi(studentstats.extractStatText(4)) + std::stoi(studentstats.extractStatText(6))) / 2)
										    + std::stoi(weaponstats.extractStatText(2))
											/*+Skills*/);
		change.at(4).Set(buffer);
		totalstats.augmentAllStats(change);
	}
	void CalculateAS() {
		std::vector<Stat> change = totalstats.getStats();
		std::wstring buffer = std::to_wstring(std::stoi(studentstats.extractStatText(5))
										+ ((std::stoi(weaponstats.extractStatText(4)) - std::stoi(weaponstats.extractStatText(2))) / 5));
		change.at(5).Set(buffer);
		totalstats.augmentAllStats(change);
	}
	void CalculateTotalProt() {
		std::vector<Stat> change = totalstats.getStats();
		std::wstring buffer = std::to_wstring(std::stoi(studentstats.extractStatText(7))
											/*+/- Battalions
											+ Equipment*/);
		change.at(6).Set(buffer);
		totalstats.augmentAllStats(change);
	}
	void CalculateTotalResilience() {
		std::vector<Stat> change = totalstats.getStats();
		std::wstring buffer = std::to_wstring(std::stoi(studentstats.extractStatText(8))
											/*+/- Battalions
											+ Equipment*/);
		change.at(7).Set(buffer);
		totalstats.augmentAllStats(change);
	}
	void CalculateTotalAvoid() {
		std::vector<Stat> change = totalstats.getStats();
		std::wstring buffer = std::to_wstring(std::stoi((totalstats.getStats())[5].extractText())
											/*+ Skills 
											+/- Battalions
											+/- Terrain Effects*/);
		change.at(8).Set(buffer);
		totalstats.augmentAllStats(change);
	}
	void CalculateTotalCritAvoid() {
		std::vector<Stat> change = totalstats.getStats();
		std::wstring buffer = std::to_wstring(std::stoi(weaponstats.extractStatText(2))
										  - std::stoi(studentstats.extractStatText(6)));

		change.at(9).Set(buffer);
		totalstats.augmentAllStats(change);
	}
	void CalculateTotalRange() {
		std::vector<Stat> change = totalstats.getStats();
		std::wstring buffer = weaponstats.extractStatText(3);

		change.at(10).Set(buffer);
		totalstats.augmentAllStats(change);
	}

	TotalStats getTotalStats() {
		return totalstats;
	}

};

#endif