#ifndef CLASS_H
#define CLASS_H
class Class : public ClassStats{
protected:
	std::wstring classname = L"";
	//GrowthRate gr;
	//skill level bonuses
	//ability unlocks
	//art unlocks
	//which tier within class hierarchy class it is in
public:
	Class() {}
	Class(std::wstring uName, std::wstring uHP, std::wstring uMOV, std::wstring uSTR,
			std::wstring uMAG, std::wstring uDEX, std::wstring uSPD,
			std::wstring uLCK, std::wstring uDEF, std::wstring uRES,
			std::wstring uCHA, std::wstring bHP, std::wstring bMOV,
			std::wstring bSTR, std::wstring bMAG, std::wstring bDEX,
			std::wstring bSPD, std::wstring bLCK, std::wstring bDEF,
			std::wstring bRES, std::wstring bCHA) : 
		ClassStats(uHP, uMOV, uSTR,
					uMAG, uDEX, uSPD,
					uLCK, uDEF, uRES,
					uCHA, bHP, bMOV,
					bSTR, bMAG, bDEX,
					bSPD, bLCK, bDEF,
					bRES, bCHA)
	{
		setName(uName);
	}

	void setName(std::wstring change) { classname = change; }
	std::wstring getName() { return classname; }
};

#endif