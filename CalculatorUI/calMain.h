#pragma once

#include "wx/wx.h"

class calMain : public wxFrame
{
public:
	calMain();
	~calMain();
	
public:

	int nFieldWidth = 6;
	int nFieldHeight = 4;
	wxButton *CalButton = nullptr;
	wxTextCtrl *m_txt1 = nullptr;

	wxDECLARE_EVENT_TABLE();
};