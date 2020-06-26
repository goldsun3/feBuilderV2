#ifndef WEAPONSTATS_H
#define WEAPONSTATS_H

class WeaponStats {
protected:
	std::vector<Stat> allStats;
public:
	WeaponStats() {}

	WeaponStats(std::wstring uMight, std::wstring uHit, std::wstring uCrit,
		std::wstring uRange, std::wstring uWeight, std::wstring uSkillLVL,
		std::wstring uUses) {
		setAllStats(uMight, uHit, uCrit, uRange, uWeight, uSkillLVL, uUses);
	}

	void setAllStats(std::wstring uMight, std::wstring uHit, std::wstring uCrit,
		std::wstring uRange, std::wstring uWeight, std::wstring uSkillLVL,
		std::wstring uUSes) {

		allStats.push_back(Stat(uMight));
		allStats.push_back(Stat(uHit));
		allStats.push_back(Stat(uCrit));
		allStats.push_back(Stat(uRange));
		allStats.push_back(Stat(uWeight));
		allStats.push_back(Stat(uSkillLVL));
		allStats.push_back(Stat(uUSes));
	}

	std::wstring extractStatText(UINT pos) {
		std::wstring temp = allStats[pos].extractText();
		return temp;
	}

	std::vector<Stat> getStats() {
		return allStats;
	}

	void augmentAllStats(std::vector<Stat> change) {
		allStats = change;
	}
};

#endif