#ifndef BUTTONCLASSBOOSTEDSTATS_H
#define BUTTONCLASSBOOSTEDSTATS_H
class ButtonClassBoostedStats : ButtonTemplate
{
protected:
public:
	virtual void Construct(HWND hwnd) {
		hButton = CreateWindowEx(
			WS_EX_CLIENTEDGE,
			L"BUTTON",
			L"BOOSTED",
			WS_CHILD | WS_CLIPSIBLINGS | WS_VISIBLE |
			BS_AUTORADIOBUTTON | BS_NOTIFY | BS_LEFTTEXT,
			900, 30, 100, 20,
			hwnd,
			(HMENU)IDC_MAIN_BCBOS,
			GetModuleHandle(NULL),
			NULL);

		if (hButton == NULL) {
			MessageBox(hwnd, L"Could not create button.", L"Error!", MB_OK | MB_ICONERROR);
		}
	}

	HWND GetHandle() { return hButton; }
};

#endif