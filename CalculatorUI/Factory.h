#pragma once
#include "calMain.h"
#include "wx/wx.h"
class Factory : public wxFrame
{
private:
	wxButton* CalButton0;
	wxButton* CalButton1;
	wxButton* CalButton2;
	wxButton* CalButton3;
	wxButton* CalButton4;
	wxButton* CalButton5;
	wxButton* CalButton6;
	wxButton* CalButton7;
	wxButton* CalButton8;
	wxButton* CalButton9;
	wxButton* CalButtonSqrt;
	wxButton* CalButtonFrac;
	wxButton* CalButtonDot;
	wxButton* CalButtonPM;
	wxButton* CalButtonP;
	wxButton* CalButtonM;
	wxButton* CalButtonX;
	wxButton* CalButtonD;
	wxButton* CalButtonE;
	wxButton* CalButtonC;
	wxButton* CalButtonCE;
	wxButton* CalButtonDel;
	wxButton* CalButtonPer;
	wxTextCtrl* m_txt1;
public:
	wxButton* CreateZeroButton();
	wxButton* CreateOneButton();
	wxButton* CreateTwoButton();
	wxButton* CreateThreeButton();
	wxButton* CreateFourButton();
	wxButton* CreateFiveButton();
	wxButton* CreateSixButton();
	wxButton* CreateSevenButton();
	wxButton* CreateEightButton();
	wxButton* CreateNineButton();
	
	wxButton* CreatePlusButton();
	wxButton* CreateMinusButton();
	wxButton* CreateTimesButton();
	wxButton* CreateDivButton();
	wxButton* CreateEqualsButton();
	wxButton* CreateClearButton();
	wxButton* CreateClearEButton();

	wxButton* CreateDeleteButton();
	wxButton* CreatePerButton();
	wxButton* CreateSqrtButton();
	wxButton* CreateFractionButton();
	wxButton* CreateDotButton();
	wxButton* CreatePMButton();
};

