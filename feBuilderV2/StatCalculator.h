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
	void setStats(std::vector<Stat>* characterstats, Weapon* weapon, std::vector<ClassStats>* classstats) {
		if (characterstats != nullptr){
			std::vector<Stat> temp = *characterstats;
			temp.at(0).setStat(characterstats->at(0).getStat());
			temp.at(1).setStat(characterstats->at(1).getStat());
			temp.at(2).setStat(characterstats->at(2).getStat());
			temp.at(3).setStat(characterstats->at(3).getStat());
			temp.at(4).setStat(characterstats->at(4).getStat());
			temp.at(5).setStat(characterstats->at(5).getStat());
			temp.at(6).setStat(characterstats->at(6).getStat());
			temp.at(7).setStat(characterstats->at(7).getStat());
			temp.at(8).setStat(characterstats->at(8).getStat());
			temp.at(9).setStat(characterstats->at(9).getStat());
			charstats.updateAllStats(temp);
		}

		if (classstats != nullptr) {
			std::vector<Stat> temp = *characterstats;
			temp.at(0).setStat(classstats->at(0).getStat());
			temp.at(1).setStat(classstats->at(1).getStat());
			temp.at(2).setStat(classstats->at(2).getStat());
			temp.at(3).setStat(classstats->at(3).getStat());
			temp.at(4).setStat(classstats->at(4).getStat());
			temp.at(5).setStat(classstats->at(5).getStat());
			temp.at(6).setStat(classstats->at(6).getStat());
			temp.at(7).setStat(classstats->at(7).getStat());
			temp.at(8).setStat(classstats->at(8).getStat());
			temp.at(9).setStat(classstats->at(9).getStat());
			charstats.updateAllStats(temp);
		}

		if (weapon != nullptr) {
			std::vector<Stat> temp = weapon->getAllStats();
			temp.at(0).setStat(weapon->getAllStats().at(0).getStat());
			temp.at(1).setStat(weapon->getAllStats().at(1).getStat());
			temp.at(2).setStat(weapon->getAllStats().at(2).getStat());
			temp.at(3).setStat(weapon->getAllStats().at(3).getStat());
			temp.at(4).setStat(weapon->getAllStats().at(4).getStat());
			temp.at(5).setStat(weapon->getAllStats().at(5).getStat());
			temp.at(6).setStat(weapon->getAllStats().at(6).getStat());
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