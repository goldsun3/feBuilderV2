#ifndef DROPDOWNTEMPLATE_H
#define DROPDOWNTEMPLATE_H
class DropDownTemplate
{
protected:
	HWND hDropDown = nullptr;
public:
	virtual void Construct(HWND hwnd) = 0;
};

#endif