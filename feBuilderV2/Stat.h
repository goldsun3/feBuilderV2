#ifndef STAT_H
#define STAT_H

class Stat {
protected:
	std::wstring stat = L"";
public:
	Stat() { stat = L""; }

	void Set(std::wstring change) { stat = change; }
	Stat(std::wstring change) { stat = change; }
	std::wstring extractText() { return stat; }
};

#endif