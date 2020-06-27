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

	void SetCharacterList(CharacterList characterlist, HWND hwnd) {
		for (int i = 0; i < characterlist.getSize(); ++i) {
			Character character = characterlist.getCharacter(i);
			std::wstring initbuffer = character.getName();
			LPCTSTR lastbuffer = &initbuffer[0];
			ListBox_AddString(hListBox, lastbuffer);
		}

	}

	HWND GetHandle() { return hListBox; }
};
#endif