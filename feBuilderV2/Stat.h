#ifndef STAT_H
#define STAT_H

class Stat {
protected:
	std::wstring stat = L"";
public:
	Stat() { stat = L""; }
	Stat(std::wstring change) { stat = change; }

	void setStat(std::wstring change) { stat = change; }

	std::wstring getStat() { return stat; }
};

#endif