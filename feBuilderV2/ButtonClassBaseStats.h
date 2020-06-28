#ifndef BUTTONCLASSBASESTATS_H
#define BUTTONCLASSBASESTATS_H
class ButtonClassBaseStats : ButtonTemplate
{
protected:
public:
	virtual void Construct(HWND hwnd) {
		hButton = CreateWindowEx(
			WS_EX_CLIENTEDGE,
			L"BUTTON",
			L"BASE",
			WS_CHILD | WS_CLIPSIBLINGS | WS_VISIBLE |
			BS_AUTORADIOBUTTON | BS_NOTIFY | BS_LEFTTEXT,
			900, 10, 100, 20,
			hwnd,
			(HMENU)IDC_MAIN_BCBAS,
			GetModuleHandle(NULL),
			NULL);

		if (hButton == NULL) {
			MessageBox(hwnd, L"Could not create button.", L"Error!", MB_OK | MB_ICONERROR);
		}
		else {
			Button_SetCheck(hButton, BST_CHECKED);
		}
	}

	HWND GetHandle() { return hButton; }
};

#endif