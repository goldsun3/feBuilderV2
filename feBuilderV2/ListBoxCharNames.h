#ifndef LISTBOXCHARNAMES_H
#define LISTBOXCHARNAMES_H

class ListBoxCharNames : public ListBoxTemplate
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
			10, 10, 150, 500,
			hwnd,
			(HMENU)IDC_MAIN_LBCN,
			GetModuleHandle(NULL),
			NULL);

		if (hListBox == NULL) {
			MessageBox(hwnd, L"Could not create list box.", L"Error!", MB_OK | MB_ICONERROR);
		}
	}

	void SetRoster(StudentList studentlist, HWND hwnd) {
		for (int i = 0; i < studentlist.getSize(); ++i) {
			Student student = studentlist.getStudent(i);
			std::wstring initbuffer = student.getName();
			LPCTSTR lastbuffer = &initbuffer[0];
			ListBox_AddString(hListBox, lastbuffer);
		}

	}

	HWND GetHandle() { return hListBox; }
};
#endif