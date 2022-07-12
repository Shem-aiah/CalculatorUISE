#include "calMain.h"
#include "wx/wx.h"
#include "Factory.h"


wxBEGIN_EVENT_TABLE(calMain, wxFrame)
EVT_BUTTON(100, ButtonPressed0)
EVT_BUTTON(101, ButtonPressed1)
EVT_BUTTON(102, ButtonPressed2)
EVT_BUTTON(103, ButtonPressed3)
EVT_BUTTON(104, ButtonPressed4)
EVT_BUTTON(105, ButtonPressed5)
EVT_BUTTON(106, ButtonPressed6)
EVT_BUTTON(107, ButtonPressed7)
EVT_BUTTON(108, ButtonPressed8)
EVT_BUTTON(109, ButtonPressed9)
EVT_BUTTON(1000, ButtonPressedPlus)
EVT_BUTTON(1001, ButtonPressedMinus)
EVT_BUTTON(1002, ButtonPressedEquals)
EVT_BUTTON(1003, ButtonPressedClear)
EVT_BUTTON(1004, ButtonPressedPM)
EVT_BUTTON(1005, ButtonPressedDot)
EVT_BUTTON(1006, ButtonPressedTimes)
EVT_BUTTON(1007, ButtonPressedDiv)
EVT_BUTTON(1008, ButtonPressedClearE)
EVT_BUTTON(1009, ButtonPressedDelete)
EVT_BUTTON(1010, ButtonPressedPer)
EVT_BUTTON(1011, ButtonPressedSqrt)
EVT_BUTTON(1012, ButtonPressedFraction)
wxEND_EVENT_TABLE()

calMain::calMain() : wxFrame(nullptr, wxID_ANY, "Calculator UI!", wxPoint(50, 50), wxSize(335, 545))
{
	//Display
	wxFont font(15, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
	m_txt1 = new wxTextCtrl(this, wxID_ANY, "0", wxPoint(0, 21), wxSize(322, 50));
	CalButton = new wxButton(this, wxID_ANY, "Standard", wxPoint(0, 1), wxSize(80, 20));
	Factory ButtonFactory;
	//NumPad
	CalButtonPM = ButtonFactory.CreatePMButton();
	CalButtonDot = ButtonFactory.CreateDotButton();
	CalButton0 = ButtonFactory.CreateZeroButton();
	CalButton1 = ButtonFactory.CreateOneButton();
	CalButton2 = ButtonFactory.CreateTwoButton();
	CalButton3 = ButtonFactory.CreateThreeButton();
	CalButton4 = ButtonFactory.CreateFourButton();
	CalButton5 = ButtonFactory.CreateFiveButton();
	CalButton6 = ButtonFactory.CreateSixButton();
	CalButton7 = ButtonFactory.CreateSevenButton();
	CalButton8 = ButtonFactory.CreateEightButton();
	CalButton9 = ButtonFactory.CreateNineButton();
	//Operations
	CalButtonP = ButtonFactory.CreatePlusButton();
	CalButtonM = ButtonFactory.CreateMinusButton();
	CalButtonX = ButtonFactory.CreateTimesButton();
	CalButtonD = ButtonFactory.CreateDivButton();
	CalButtonE = ButtonFactory.CreateEqualsButton();
	CalButtonPer = ButtonFactory.CreatePerButton();
	//Top Buttons
	CalButtonC = ButtonFactory.CreateClearButton();
	CalButtonCE = ButtonFactory.CreateClearEButton();
	CalButtonDel = ButtonFactory.CreateDotButton();
	CalButtonSqrt = ButtonFactory.CreateFractionButton();
	CalButtonFrac = ButtonFactory.CreateFractionButton();
}

wxString FirstVal;
wxString LastVal;
wxString Res;
int num1;
int num2;
int num3;
float Answer;

calMain::~calMain()
{
}

void calMain::ButtonPressedPlus(wxCommandEvent& evt)
{
	FirstVal = m_txt1->GetValue();
	num1 = wxAtoi(FirstVal);
	num3 = 1;
	m_txt1->SetValue("0");
}

void calMain::ButtonPressedMinus(wxCommandEvent& evt)
{
	FirstVal = m_txt1->GetValue();
	num1 = wxAtoi(FirstVal);
	num3 = 2;
	m_txt1->SetValue("0");
}

void calMain::ButtonPressedTimes(wxCommandEvent& evt)
{
	FirstVal = m_txt1->GetValue();
	num1 = wxAtoi(FirstVal);
	num3 = 3;
	m_txt1->SetValue("0");
}

void calMain::ButtonPressedDiv(wxCommandEvent& evt)
{
	FirstVal = m_txt1->GetValue();
	num1 = wxAtoi(FirstVal);
	num3 = 4;
	m_txt1->SetValue("0");
}

void calMain::ButtonPressedEquals(wxCommandEvent& evt)
{
	LastVal = m_txt1->GetValue();
	num2 = wxAtoi(LastVal);
	switch (num3) {
	case 1:
		Answer = float((num1)) + float((num2));
		Res = wxString::Format(wxT("%g"), Answer);
		m_txt1->SetValue(Res);
		break;
	case 2:
		Answer = float((num1)) - float((num2));
		Res = wxString::Format(wxT("%g"), Answer);
		m_txt1->SetValue(Res);
		break;
	case 3:
		Answer = float((num1)) * float((num2));
		Res = wxString::Format(wxT("%g"), Answer);
		m_txt1->SetValue(Res);
		break;
	case 4:
		Answer = float((num1)) / float((num2));
		Res = wxString::Format(wxT("%g"), Answer);
		m_txt1->SetValue(Res);
		break;
	case 5:
		Answer = float((num1)) / float((num2)) * 100;
		Res = wxString::Format(wxT("%g"), Answer);
		m_txt1->SetValue(Res + "%");
		break;
	case 6:
		Answer = 1;
		for (int i = 0; i < num2; i++)
		{
			Answer *= float((num1));
		}
		Res = wxString::Format(wxT("%g"), Answer);
		m_txt1->SetValue(Res);
		break;
	case 7:
		Answer = float((num1)) / float((num2));
		Res = wxString::Format(wxT("%g"), Answer);
		m_txt1->SetValue(Res);
		break;
	}
}

void calMain::ButtonPressedClear(wxCommandEvent& evt)
{
	m_txt1->SetValue("0");
}

void calMain::ButtonPressedClearE(wxCommandEvent& evt)
{
	m_txt1->SetValue("0");
	FirstVal = m_txt1->GetValue();
	num1 = wxAtoi(FirstVal);
}

void calMain::ButtonPressedDelete(wxCommandEvent& evt)
{
	m_txt1->Clear();
}

void calMain::ButtonPressedPer(wxCommandEvent& evt) {
	FirstVal = m_txt1->GetValue();
	num1 = wxAtoi(FirstVal);
	num3 = 5;
	m_txt1->SetValue("0");
}

void calMain::ButtonPressedSqrt(wxCommandEvent& evt) {
	FirstVal = m_txt1->GetValue();
	num1 = wxAtoi(FirstVal);
	num3 = 6;
	m_txt1->SetValue("0");
}

void calMain::ButtonPressed0(wxCommandEvent& evt)
{
	if (m_txt1->GetValue() == "0")
	{
		m_txt1->SetValue(CalButton0->GetLabel());
	}
	else
	{
		m_txt1->AppendText(CalButton0->GetLabel());
	}
}

void calMain::ButtonPressed1(wxCommandEvent& evt) {
	if (m_txt1->GetValue() == "0")
	{
		m_txt1->SetValue(CalButton1->GetLabel());
	}
	else
	{
		m_txt1->AppendText(CalButton1->GetLabel());
	}
}

void calMain::ButtonPressed2(wxCommandEvent& evt) {
	if (m_txt1->GetValue() == "0")
	{
		m_txt1->SetValue(CalButton2->GetLabel());
	}
	else
	{
		m_txt1->AppendText(CalButton2->GetLabel());
	}
}

void calMain::ButtonPressed3(wxCommandEvent& evt) {
	if (m_txt1->GetValue() == "0")
	{
		m_txt1->SetValue(CalButton3->GetLabel());
	}
	else
	{
		m_txt1->AppendText(CalButton3->GetLabel());
	}
}

void calMain::ButtonPressed4(wxCommandEvent& evt) {
	if (m_txt1->GetValue() == "0")
	{
		m_txt1->SetValue(CalButton4->GetLabel());
	}
	else
	{
		m_txt1->AppendText(CalButton4->GetLabel());
	}
}

void calMain::ButtonPressed5(wxCommandEvent& evt) {
	if (m_txt1->GetValue() == "0")
	{
		m_txt1->SetValue(CalButton5->GetLabel());
	}
	else
	{
		m_txt1->AppendText(CalButton5->GetLabel());
	}
}

void calMain::ButtonPressed6(wxCommandEvent& evt) {
	if (m_txt1->GetValue() == "0")
	{
		m_txt1->SetValue(CalButton6->GetLabel());
	}
	else
	{
		m_txt1->AppendText(CalButton6->GetLabel());
	}
}

void calMain::ButtonPressed7(wxCommandEvent& evt) {
	if (m_txt1->GetValue() == "0")
	{
		m_txt1->SetValue(CalButton7->GetLabel());
	}
	else
	{
		m_txt1->AppendText(CalButton7->GetLabel());
	}
}

void calMain::ButtonPressed8(wxCommandEvent& evt) {
	if (m_txt1->GetValue() == "0")
	{
		m_txt1->SetValue(CalButton8->GetLabel());
	}
	else
	{
		m_txt1->AppendText(CalButton8->GetLabel());
	}
}

void calMain::ButtonPressed9(wxCommandEvent& evt) {
	if (m_txt1->GetValue() == "0")
	{
		m_txt1->SetValue(CalButton9->GetLabel());
	}
	else
	{
		m_txt1->AppendText(CalButton9->GetLabel());
	}
}

void calMain::ButtonPressedPM(wxCommandEvent& evt)
{
	if (PosNeg == true) {
		m_txt1->SetValue(CalButtonM->GetLabel());
	}
}

void calMain::ButtonPressedDot(wxCommandEvent& evt)
{
	if (m_txt1->GetValue() == "0")
	{
		m_txt1->SetValue(CalButtonDot->GetLabel());
	}
	else
	{
		m_txt1->AppendText(CalButtonDot->GetLabel());
	}
}

void calMain::ButtonPressedFraction(wxCommandEvent& evt) {
	FirstVal = m_txt1->GetValue();
	num1 = wxAtoi(FirstVal);
	num3 = 7;
	m_txt1->SetValue("0");

}