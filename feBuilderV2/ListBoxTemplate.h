#ifndef LISTBOXTEMPLATE_H
#define LISTBOXTEMPLATE_H
class ListBoxTemplate
{
protected:
	HWND hListBox = nullptr;
public:
	virtual void Construct(HWND hwnd) = 0;
};

#endif