#ifndef TOTALSTATS_H
#define TOTALSTATS_H
class TotalStats
{
protected:
	std::vector<Stat> allStats;
public:
	TotalStats() {}

	TotalStats(std::wstring uPHYSATK, std::wstring uMGKATK, std::wstring uPHYSHIT,
		std::wstring uMGKHIT, std::wstring uTCRIT, std::wstring uAS,
		std::wstring uTPROT, std::wstring uTRSL, std::wstring uAVO,
		std::wstring uCRITAVO, std::wstring uRNGE) {
		setAllStats(uPHYSATK, uMGKATK, uPHYSHIT, uMGKHIT, uTCRIT, uAS, uTPROT, uTRSL, uAVO, uCRITAVO, uRNGE);
	}

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

	std::vector<Stat> getAllStats() { return allStats; }
	std::wstring getStatText(UINT pos) {
		std::wstring temp = allStats[pos].getStat();
		return temp;
	}

	void updateAllStats(std::vector<Stat> change) { allStats = change; }
};

#endif