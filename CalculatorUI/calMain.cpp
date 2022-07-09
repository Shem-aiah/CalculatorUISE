#include "calMain.h"

wxBEGIN_EVENT_TABLE(calMain, wxFrame)
wxEND_EVENT_TABLE()

calMain::calMain() : wxFrame(nullptr, wxID_ANY, "Calculator UI!", wxPoint(50, 50), wxSize(335, 545))
{
	CalButton = new wxButton(this, wxID_ANY, "Standard", wxPoint(0, 1), wxSize(120, 20));
	wxFont font(15, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
	m_txt1 = new wxTextCtrl(this,wxID_ANY, "0",wxPoint(0, 21), wxSize(322, 50));
	//Top Buttons
	CalButton = new wxButton(this, wxID_ANY, "%", wxPoint(1, 70), wxSize(50, 70));
	CalButton->SetFont(font);
	CalButton = new wxButton(this, wxID_ANY, "CE", wxPoint(50, 70), wxSize(50, 70));
	CalButton->SetFont(font);
	CalButton = new wxButton(this, wxID_ANY, "C", wxPoint(100, 70), wxSize(50, 70));
	CalButton->SetFont(font);
	CalButton = new wxButton(this, wxID_ANY, "Del", wxPoint(150, 70), wxSize(50, 70));
	CalButton->SetFont(font);
	CalButton = new wxButton(this, wxID_ANY, "1/x", wxPoint(200, 70), wxSize(50, 70));
	CalButton->SetFont(font);
	CalButton = new wxButton(this, wxID_ANY, "x^2", wxPoint(250, 70), wxSize(70, 70));
	CalButton->SetFont(font);
	//Side Buttons
	CalButton = new wxButton(this, wxID_ANY, "/", wxPoint(269, 156), wxSize(50, 70));
	CalButton->SetFont(font);
	CalButton = new wxButton(this, wxID_ANY, "X", wxPoint(269, 226), wxSize(50, 70));
	CalButton->SetFont(font);
	CalButton = new wxButton(this, wxID_ANY, "-", wxPoint(269, 296), wxSize(50, 70));
	CalButton->SetFont(font);
	CalButton = new wxButton(this, wxID_ANY, "+", wxPoint(269, 366), wxSize(50, 70));
	CalButton->SetFont(font);
	CalButton = new wxButton(this, wxID_ANY, "=", wxPoint(269, 436), wxSize(50, 70));
	CalButton->SetFont(font);
	//Num Pad
	CalButton = new wxButton(this, wxID_ANY, "7", wxPoint(30, 156), wxSize(50, 70));
	CalButton->SetFont(font);
	CalButton = new wxButton(this, wxID_ANY, "8", wxPoint(90, 156), wxSize(50, 70));
	CalButton->SetFont(font);
	CalButton = new wxButton(this, wxID_ANY, "9", wxPoint(150, 156), wxSize(50, 70));
	CalButton->SetFont(font);
	CalButton = new wxButton(this, wxID_ANY, "4", wxPoint(30, 226), wxSize(50, 70));
	CalButton->SetFont(font);
	CalButton = new wxButton(this, wxID_ANY, "5", wxPoint(90, 226), wxSize(50, 70));
	CalButton->SetFont(font);
	CalButton = new wxButton(this, wxID_ANY, "6", wxPoint(150, 226), wxSize(50, 70));
	CalButton->SetFont(font);
	CalButton = new wxButton(this, wxID_ANY, "1", wxPoint(30, 296), wxSize(50, 70));
	CalButton->SetFont(font);
	CalButton = new wxButton(this, wxID_ANY, "2", wxPoint(90, 296), wxSize(50, 70));
	CalButton->SetFont(font);
	CalButton = new wxButton(this, wxID_ANY, "3", wxPoint(150, 296), wxSize(50, 70));
	CalButton->SetFont(font);
	CalButton = new wxButton(this, wxID_ANY, "+/-", wxPoint(30, 366), wxSize(50, 70));
	CalButton->SetFont(font);
	CalButton = new wxButton(this, wxID_ANY, "0", wxPoint(90, 366), wxSize(50, 70));
	CalButton->SetFont(font);
	CalButton = new wxButton(this, wxID_ANY, ".", wxPoint(150, 366), wxSize(50, 70));
	CalButton->SetFont(font);
	//Grid
	wxGridSizer* grid = new wxGridSizer(nFieldWidth, nFieldHeight, 0, 0);
	this->SetSizer(grid);
	grid->Layout();
}

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
			Answer *=  float((num1));
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