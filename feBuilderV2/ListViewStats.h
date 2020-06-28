#ifndef LISTVIEWSTATS_H
#define LISTVIEWSTATS_H
class ListViewStats : public ListViewTemplate{
protected:
	LVCOLUMN lvc    { LVCF_FMT | LVCF_WIDTH | LVCF_TEXT | LVCF_SUBITEM };
	LVITEM lvi		{ LVIF_TEXT };
	std::vector<std::wstring> initStats{ L"0", L"0", L"0", L"0", L"0", L"0", L"0", L"0", L"0", L"0" };
public:
	virtual void Construct(HWND hwnd) {
		hListView = CreateWindowEx(
			WS_EX_CLIENTEDGE,
			WC_LISTVIEW,
			L"",
			WS_CHILD | WS_CLIPSIBLINGS | WS_VISIBLE |
			LVS_REPORT,
			350, 10, xlen, ylen,
			hwnd,
			(HMENU)IDC_MAIN_LV,
			GetModuleHandle(NULL),
			NULL);

		if (hListView == NULL) {
			MessageBox(hwnd, L"Could not create list box.", L"Error!", MB_OK | MB_ICONERROR);
		}
	}

	virtual void SetColumns(HWND hwnd) {
		lvc.mask = LVCF_FMT | LVCF_WIDTH | LVCF_TEXT | LVCF_SUBITEM;
		lvi.mask = LVIF_TEXT;

		for (int col = 0; col < C_LVS; col++) {

			lvc.iSubItem = col;
			lvc.pszText = buffer;
			lvc.cx = 100;
			lvc.fmt = LVCFMT_CENTER;

			LoadString(
				GetModuleHandle(NULL),
				IDS_HP + col,
				buffer,
				(sizeof(buffer) / 2));

			if (ListView_InsertColumn(hListView, col, &lvc) == -1) {
				MessageBox(hwnd, L"Could not create list box.", L"Error!", MB_OK | MB_ICONERROR);
			}
		}

		ListView_InsertItem(hListView, &lvi);
		for (int col = 0; col < C_LVS; col++) {
			std::wstring initbuffer = initStats[col];
			LPWSTR finalbuffer = &initbuffer[0];
			lvi.pszText = finalbuffer;
			lvi.iSubItem = col;
			ListView_SetItem(hListView, &lvi);
		}
	}

	virtual void SetColumnSpacing() {
		for (int col = 0; col < C_LVS; col++) {
			ListView_SetColumnWidth(hListView, col, LVSCW_AUTOSIZE_USEHEADER);
		}
	}

	HWND GetHandle() { return hListView; }


};

#endif