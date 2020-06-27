#ifndef STATSTEMPLATE_H
#define STATSTEMPLATE_H

class StatsTemplate{
protected:
	std::vector<Stat> allStats;
public:
	StatsTemplate() {}

	//CharacterStats constructor
	StatsTemplate(std::wstring uHP, std::wstring uMOV, std::wstring uSTR,
		std::wstring uMAG, std::wstring uDEX, std::wstring uSPD,
		std::wstring uLCK, std::wstring uDEF, std::wstring uRES,
		std::wstring uCHA) {
		setAllStats(uHP, uMOV, uSTR, uMAG, uDEX, uSPD, uLCK, uDEF, uRES, uCHA);
	}

	//CharacterStats setAllStats
	void setAllStats(std::wstring uHP, std::wstring uMOV, std::wstring uSTR,
		std::wstring uMAG, std::wstring uDEX, std::wstring uSPD,
		std::wstring uLCK, std::wstring uDEF, std::wstring uRES,
		std::wstring uCHA) {

		allStats.push_back(Stat(uHP));
		allStats.push_back(Stat(uMOV));
		allStats.push_back(Stat(uSTR));
		allStats.push_back(Stat(uMAG));
		allStats.push_back(Stat(uDEX));
		allStats.push_back(Stat(uSPD));
		allStats.push_back(Stat(uLCK));
		allStats.push_back(Stat(uDEF));
		allStats.push_back(Stat(uRES));
		allStats.push_back(Stat(uCHA));
	}

	//TotalStats constructor
	StatsTemplate(std::wstring uPHYSATK, std::wstring uMGKATK, std::wstring uPHYSHIT,
		std::wstring uMGKHIT, std::wstring uTCRIT, std::wstring uAS,
		std::wstring uTPROT, std::wstring uTRSL, std::wstring uAVO,
		std::wstring uCRITAVO, std::wstring uRNGE) {
		setAllStats(uPHYSATK, uMGKATK, uPHYSHIT, uMGKHIT, uTCRIT, uAS, uTPROT, uTRSL, uAVO, uCRITAVO, uRNGE);
	}

	//TotalStats setAllStats
	void setAllStats(std::wstring uPHYSATK, std::wstring uMGKATK, std::wstring uPHYSHIT,
		std::wstring uMGKHIT, std::wstring uTCRIT, std::wstring uAS,
		std::wstring uTPROT, std::wstring uTRSL, std::wstring uAVO,
		std::wstring uCRITAVO, std::wstring uRNGE) {

		allStats.push_back(Stat(uPHYSATK));
		allStats.push_back(Stat(uMGKATK));
		allStats.push_back(Stat(uPHYSHIT));
		allStats.push_back(Stat(uMGKHIT));
		allStats.push_back(Stat(uTCRIT));
		allStats.push_back(Stat(uAS));
		allStats.push_back(Stat(uTPROT));
		allStats.push_back(Stat(uTRSL));
		allStats.push_back(Stat(uAVO));
		allStats.push_back(Stat(uCRITAVO));
		allStats.push_back(Stat(uRNGE));
	}

	//WeaponStats constructor
	StatsTemplate(std::wstring uMight, std::wstring uHit, std::wstring uCrit,
		std::wstring uRange, std::wstring uWeight, std::wstring uSkillLVL,
		std::wstring uUses) {
		setAllStats(uMight, uHit, uCrit, uRange, uWeight, uSkillLVL, uUses);
	}

	//WeaponStats setAllStats
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

	std::vector<Stat> getAllStats() { return allStats; }
	
	std::wstring getStatText(UINT pos) {
		std::wstring temp = allStats[pos].getStat();
		return temp;
	}

	void updateAllStats(std::vector<Stat> change) { allStats = change; }
};

#endif