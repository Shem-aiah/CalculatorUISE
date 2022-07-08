#pragma once

#include "wx/wx.h"

class calMain : public wxFrame
{
public:
	calMain();
	~calMain();
public:
	//Buttons
	wxButton* CalButton = nullptr;
	wxButton* CalButtonP = nullptr;
	wxButton* CalButtonM = nullptr;
	wxButton* CalButtonE = nullptr;
	wxButton* CalButtonC = nullptr;
	wxButton* CalButton0 = nullptr;
	wxButton *CalButton1 = nullptr;
	wxButton* CalButton2 = nullptr;
	wxButton* CalButton3 = nullptr;
	wxButton* CalButton4 = nullptr;
	wxButton* CalButton5 = nullptr;
	wxButton* CalButton6 = nullptr;
	wxButton* CalButton7 = nullptr;
	wxButton* CalButton8 = nullptr;
	wxButton* CalButton9 = nullptr;

	wxTextCtrl *m_txt1 = nullptr;
	bool bFirstClick = true;
	//Commands
	void ButtonPressed0(wxCommandEvent& evt);
	void ButtonPressed1(wxCommandEvent& evt);
	void ButtonPressed2(wxCommandEvent& evt);
	void ButtonPressed3(wxCommandEvent& evt);
	void ButtonPressed4(wxCommandEvent& evt);
	void ButtonPressed5(wxCommandEvent& evt);
	void ButtonPressed6(wxCommandEvent& evt);
	void ButtonPressed7(wxCommandEvent& evt);
	void ButtonPressed8(wxCommandEvent& evt);
	void ButtonPressed9(wxCommandEvent& evt);
	//Special Buttons
	void ButtonPressedPlus(wxCommandEvent& evt);
	void ButtonPressedMinus(wxCommandEvent& evt);
	void ButtonPressedEquals(wxCommandEvent& evt);
	void ButtonPressedClear(wxCommandEvent& evt);
	wxDECLARE_EVENT_TABLE();
};
	


