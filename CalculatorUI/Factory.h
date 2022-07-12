#pragma once
#include "calMain.h"
#include "wx/wx.h"

class Factory : public wxFrame
{
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

