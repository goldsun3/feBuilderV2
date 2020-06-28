#ifndef STATCALCULATOR_H
#define STATCALCULATOR_H
class StatCalculator
{
protected:
	CharacterStats charstats;
	WeaponStats wpnstats;
	TotalStats totalstats = { L"0" , L"0" , L"0" , L"0" , L"0" , L"0" , L"0" , L"0" , L"0" , L"0" , L"0" };
public:
	StatCalculator(){
		charstats = CharacterStats(L"0", L"0", L"0", L"0", L"0", L"0", L"0", L"0", L"0", L"0");
		wpnstats = WeaponStats(L"0", L"0", L"0", L"0", L"0", L"0", L"0");
	}
	void setStats(std::vector<Stat>* characterstats, Weapon* weapon, std::vector<Stat>* charmoddedbyclassstats) {
		if (characterstats != nullptr){
			std::vector<Stat> temp = *characterstats;
			charstats.updateAllStats(temp);
		}

		if (charmoddedbyclassstats != nullptr) {
			std::vector<Stat> temp = *charmoddedbyclassstats;
			charstats.updateAllStats(temp);
		}

		if (weapon != nullptr) {
			std::vector<Stat> temp = weapon->getAllStats();					
			wpnstats.updateAllStats(temp);
		}
	}
	void CalculateTotalPhysicalAttack() {
		std::vector<Stat> change = totalstats.getAllStats();
		std::wstring buffer = std::to_wstring(std::stoi(charstats.getStatText(2))
										  + std::stoi(wpnstats.getStatText(0))
											/*+ ifEffective(Weapon Might x3)
											+ Combat Art 
											+ Skills 
											+/- Battalions 
											+ Linked attacks 
											+/- Terrain Effects 
											- Enemies Protection*/);
		change.at(0).setStat(buffer);
		totalstats.updateAllStats(change);
	}
	void CalculateTotalMagicAttack() {
		std::vector<Stat> change = totalstats.getAllStats();
		std::wstring buffer = std::to_wstring (std::stoi(charstats.getStatText(3))
										   + std::stoi(wpnstats.getStatText(0))
											/*+ ifEffective(Weapon Might x3)
											+ Combat Art
											+ Skills
											+/- Battalions
											+ Staves
											+ Linked attacks
											+/- Terrain Effects
											- Enemies Resilience*/);
		change.at(1).setStat(buffer);
		totalstats.updateAllStats(change);
	}
	void CalculateTotalPhysicalHit() {
		std::vector<Stat> change = totalstats.getAllStats();
		std::wstring buffer = std::to_wstring(std::stoi(charstats.getStatText(4))
										  + std::stoi(wpnstats.getStatText(1))
										/*+ Combat Art
										+ Skills
										+/- Battalions
										+ Linked attacks
										+/- Terrain Effects
										- Enemies Avoid*/);
		change.at(2).setStat(buffer);
		totalstats.updateAllStats(change);
	}
	void CalculateTotalMagicHit() {
		std::vector<Stat> change = totalstats.getAllStats();
		std::wstring buffer = std::to_wstring ((std::stoi(charstats.getStatText(4)) / 2)
										   + (std::stoi(charstats.getStatText(6)) / 2)
											+ std::stoi(wpnstats.getStatText(1))
										/*+ Skills
										+/- Battalions
										+ Linked attacks
										- Enemies Magic Avoid*/);
		change.at(3).setStat(buffer);
		totalstats.updateAllStats(change);
	}
	void CalculateTotalCrit() {
		std::vector<Stat> change = totalstats.getAllStats();
		std::wstring buffer = std::to_wstring(((std::stoi(charstats.getStatText(4)) + std::stoi(charstats.getStatText(6))) / 2)
										    + std::stoi(wpnstats.getStatText(2))
											/*+Skills*/);
		change.at(4).setStat(buffer);
		totalstats.updateAllStats(change);
	}
	void CalculateAS() {
		std::vector<Stat> change = totalstats.getAllStats();
		std::wstring buffer = std::to_wstring(std::stoi(charstats.getStatText(5))
										+ ((std::stoi(wpnstats.getStatText(4)) - std::stoi(wpnstats.getStatText(2))) / 5));
		change.at(5).setStat(buffer);
		totalstats.updateAllStats(change);
	}
	void CalculateTotalProt() {
		std::vector<Stat> change = totalstats.getAllStats();
		std::wstring buffer = std::to_wstring(std::stoi(charstats.getStatText(7))
											/*+/- Battalions
											+ Equipment*/);
		change.at(6).setStat(buffer);
		totalstats.updateAllStats(change);
	}
	void CalculateTotalResilience() {
		std::vector<Stat> change = totalstats.getAllStats();
		std::wstring buffer = std::to_wstring(std::stoi(charstats.getStatText(8))
											/*+/- Battalions
											+ Equipment*/);
		change.at(7).setStat(buffer);
		totalstats.updateAllStats(change);
	}
	void CalculateTotalAvoid() {
		std::vector<Stat> change = totalstats.getAllStats();
		std::wstring buffer = std::to_wstring(std::stoi((totalstats.getAllStats())[5].getStat())
											/*+ Skills 
											+/- Battalions
											+/- Terrain Effects*/);
		change.at(8).setStat(buffer);
		totalstats.updateAllStats(change);
	}
	void CalculateTotalCritAvoid() {
		std::vector<Stat> change = totalstats.getAllStats();
		std::wstring buffer = std::to_wstring(std::stoi(wpnstats.getStatText(2))
										  - std::stoi(charstats.getStatText(6)));

		change.at(9).setStat(buffer);
		totalstats.updateAllStats(change);
	}
	void CalculateTotalRange() {
		std::vector<Stat> change = totalstats.getAllStats();
		std::wstring buffer = wpnstats.getStatText(3);

		change.at(10).setStat(buffer);
		totalstats.updateAllStats(change);
	}

	TotalStats getTotalStats() {
		return totalstats;
	}

};

#endif