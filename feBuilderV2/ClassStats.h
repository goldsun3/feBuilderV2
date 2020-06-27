#ifndef CLASSSTATS_H
#define CLASSSTATS_H
class ClassStats : public StatsTemplate{
protected:
	std::vector<Stat> boosted;
	bool base = true;
public:
	ClassStats() : StatsTemplate() {

	}

	ClassStats(std::wstring uHP, std::wstring uMOV, std::wstring uSTR,
		std::wstring uMAG, std::wstring uDEX, std::wstring uSPD,
		std::wstring uLCK, std::wstring uDEF, std::wstring uRES,
		std::wstring uCHA, std::wstring bHP, std::wstring bMOV, 
		std::wstring bSTR, std::wstring bMAG, std::wstring bDEX, 
		std::wstring bSPD, std::wstring bLCK, std::wstring bDEF, 
		std::wstring bRES, std::wstring bCHA) :
		StatsTemplate(uHP, uMOV, uSTR,
			uMAG, uDEX, uSPD,
			uLCK, uDEF, uRES,
			uCHA)
	{
		setBoostedStats(bHP, bMOV, bSTR,
			bMAG, bDEX, bSPD,
			bLCK, bDEF, bRES,
			bCHA);
	}

	void setBoostedStats(std::wstring bHP, std::wstring bMOV, std::wstring bSTR,
		std::wstring bMAG, std::wstring bDEX, std::wstring bSPD,
		std::wstring bLCK, std::wstring bDEF, std::wstring bRES,
		std::wstring bCHA) {

		allStats.push_back(Stat(bHP));
		allStats.push_back(Stat(bMOV));
		allStats.push_back(Stat(bSTR));
		allStats.push_back(Stat(bMAG));
		allStats.push_back(Stat(bDEX));
		allStats.push_back(Stat(bSPD));
		allStats.push_back(Stat(bLCK));
		allStats.push_back(Stat(bDEF));
		allStats.push_back(Stat(bRES));
		allStats.push_back(Stat(bCHA));
	}

	std::vector<Stat> getBoostedStats() { return boosted; }
	void setBase(bool change) { base = change; }
	bool getBase() { return base; }
};

#endif