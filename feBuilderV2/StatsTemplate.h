#ifndef STATSTEMPLATE_H
#define STATSTEMPLATE_H

class StatsTemplate{
protected:
	std::vector<Stat> allStats;
public:
	StatsTemplate() {}
	StatsTemplate(std::wstring uHP, std::wstring uMOV, std::wstring uSTR,
		std::wstring uMAG, std::wstring uDEX, std::wstring uSPD,
		std::wstring uLCK, std::wstring uDEF, std::wstring uRES,
		std::wstring uCHA) {
		setAllStats(uHP, uMOV, uSTR, uMAG, uDEX, uSPD, uLCK, uDEF, uRES, uCHA);
	}

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
	void setBase(bool change) { base = change; }

	//inline so no template<class t>
	std::vector<Stat> getAllStats() { return allStats; }

	bool getBase() { return base; }
	
	std::wstring getStatText(UINT pos) {
		std::wstring temp = allStats[pos].getStat();
		return temp;
	}

	void updateAllStats(std::vector<Stat> change) { allStats = change; }
};

#endif