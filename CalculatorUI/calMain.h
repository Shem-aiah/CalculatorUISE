#pragma once

#include "wx/wx.h"

class calMain : public wxFrame
{
public:
	calMain();
	~calMain();
	
public:
	wxButton *CalButton = nullptr;
	wxTextCtrl* m_txt1 = nullptr;
};
	

