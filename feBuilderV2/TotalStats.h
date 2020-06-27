#ifndef TOTALSTATS_H
#define TOTALSTATS_H
class TotalStats : public StatsTemplate{
protected:
//PHYSATK, MGKATK, PHYSHIT, MGKHIT, TCRIT, AS, TPROT, TRSL, AVO, CRITAVO, RNGE
public:
	TotalStats() : StatsTemplate() {}
	TotalStats(std::wstring uPHYSATK, std::wstring uMGKATK, std::wstring uPHYSHIT,
				std::wstring uMGKHIT, std::wstring uTCRIT, std::wstring uAS,
				std::wstring uTPROT, std::wstring uTRSL, std::wstring uAVO,
				std::wstring uCRITAVO, std::wstring uRNGE) : 
		StatsTemplate(uPHYSATK, uMGKATK, uPHYSHIT,
						uMGKHIT, uTCRIT, uAS,
						uTPROT, uTRSL, uAVO,
						uCRITAVO, uRNGE) 
	{}
};

#endif