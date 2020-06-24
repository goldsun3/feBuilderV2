#ifndef LISTVIEWTEMPLATE_H
#define LISTVIEWTEMPLATE_H

class ListViewTemplate {
protected:
	HWND hListView = nullptr;
	WCHAR buffer[256] = {};
	UINT xlen = 550;
	UINT ylen = 80;
public:
	virtual void Construct(HWND hwnd) = 0;
	virtual void SetColumns(HWND hwnd) = 0;
	virtual void SetColumnSpacing() = 0;
};

#endif