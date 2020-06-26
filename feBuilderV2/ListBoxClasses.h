#ifndef LISTBOXCLASSES_H
#define LISTBOXCLASSES_H
class ListBoxClasses : public ListBoxTemplate
{
protected:
public:
	virtual void Construct(HWND hwnd) {
		hListBox = CreateWindowEx(
			WS_EX_CLIENTEDGE,
			L"LISTBOX",
			L"",
			WS_CHILD | WS_CLIPSIBLINGS | WS_VISIBLE |
			LBS_STANDARD | LBS_NOTIFY | LBS_HASSTRINGS,
			1000, 10, 150, 500,
			hwnd,
			(HMENU)IDC_MAIN_LBC,
			GetModuleHandle(NULL),
			NULL);

		if (hListBox == NULL) {
			MessageBox(hwnd, L"Could not create list box.", L"Error!", MB_OK | MB_ICONERROR);
		}
	}

	void SetClassList(ClassList classlist) {
		for (int i = 0; i < classlist.getSize(); ++i) {
			Class cLass = classlist.getClass(i);
			std::wstring initbuffer = cLass.getName();
			LPCTSTR lastbuffer = initbuffer.data();
			ListBox_AddString(hListBox, lastbuffer);
		}
	}

	HWND GetHandle() { return hListBox; }
};

#endif