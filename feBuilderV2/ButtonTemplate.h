#ifndef BUTTONTEMPLATE_H
#define BUTTONTEMPLATE_H
class ButtonTemplate
{
protected:
	HWND hButton = nullptr;
public:
	virtual void Construct(HWND hwnd) = 0;
};

#endif