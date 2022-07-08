#include "calMain.h"

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
wxEND_EVENT_TABLE()

calMain::calMain() : wxFrame(nullptr, wxID_ANY, "Calculator UI!", wxPoint(50, 50), wxSize(335, 545))
{
	wxFont font(15, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
	m_txt1 = new wxTextCtrl(this,wxID_ANY, "0",wxPoint(0, 21), wxSize(322, 50));
	CalButton = new wxButton(this, wxID_ANY, "Standard", wxPoint(0, 1), wxSize(80, 20));
	//Top Buttons
	CalButton = new wxButton(this, wxID_ANY, "%", wxPoint(1, 70), wxSize(50, 70));
	CalButton->SetFont(font);
	CalButton = new wxButton(this, wxID_ANY, "CE", wxPoint(50, 70), wxSize(50, 70));
	CalButton->SetFont(font);
	CalButtonC = new wxButton(this, 1003, "C", wxPoint(100, 70), wxSize(50, 70));
	CalButtonC->SetFont(font);
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
	
	CalButtonP = new wxButton(this, 1000, "+", wxPoint(269, 366), wxSize(50, 70));
	CalButtonP->SetFont(font);

	CalButtonM = new wxButton(this, 1001, "-", wxPoint(269, 296), wxSize(50, 70));
	CalButtonM->SetFont(font);
	
	CalButtonE = new wxButton(this, 1002, "=", wxPoint(269, 436), wxSize(50, 70));
	CalButton->SetFont(font);
	//Num Pad
	CalButton = new wxButton(this, wxID_ANY, "+/-", wxPoint(30, 366), wxSize(50, 70));
	CalButton->SetFont(font);
	
	CalButton = new wxButton(this, wxID_ANY, ".", wxPoint(150, 366), wxSize(50, 70));
	CalButton->SetFont(font);
	
	CalButton0 = new wxButton(this, 100, "0", wxPoint(90, 366), wxSize(50, 70));
	CalButton0->SetFont(font);
	
	CalButton1 = new wxButton(this, 101, "1", wxPoint(30, 296), wxSize(50, 70));
	CalButton1->SetFont(font);
	
	CalButton2 = new wxButton(this, 102, "2", wxPoint(90, 296), wxSize(50, 70));
	CalButton2->SetFont(font);
	
	CalButton3 = new wxButton(this, 103, "3", wxPoint(150, 296), wxSize(50, 70));
	CalButton3->SetFont(font);
	
	CalButton4 = new wxButton(this, 104, "4", wxPoint(30, 226), wxSize(50, 70));
	CalButton4->SetFont(font);
	
	CalButton5 = new wxButton(this, 105, "5", wxPoint(90, 226), wxSize(50, 70));
	CalButton5->SetFont(font);
	
	CalButton6 = new wxButton(this, 106, "6", wxPoint(150, 226), wxSize(50, 70));
	CalButton6->SetFont(font);
	
	CalButton7 = new wxButton(this, 107, "7", wxPoint(30, 156), wxSize(50, 70));
	CalButton7->SetFont(font);
	
	CalButton8 = new wxButton(this, 108, "8", wxPoint(90, 156), wxSize(50, 70));
	CalButton8->SetFont(font);
	
	CalButton9 = new wxButton(this, 109, "9", wxPoint(150, 156), wxSize(50, 70));
	CalButton9->SetFont(font);
}

calMain::~calMain() 
{
}
wxString First;
wxString Last;
wxString Result;
int num1;
int num2;
int num3;
float Answer;

void calMain::ButtonPressedPlus(wxCommandEvent& evt)
{
	if (m_txt1->GetValue() == "0")
	{
		m_txt1->SetValue(CalButtonP->GetLabel());
	}
	else
	{
		m_txt1->AppendText(CalButtonP->GetLabel());
	}
}

void calMain::ButtonPressedMinus(wxCommandEvent& evt) 
{
	if (m_txt1->GetValue() == "0")
	{
		m_txt1->SetValue(CalButtonM->GetLabel());
	}
	else
	{
		m_txt1->AppendText(CalButtonM->GetLabel());
	}
}

void calMain::ButtonPressedEquals(wxCommandEvent& evt)
{
	if (m_txt1->GetValue() == "0")
	{
		m_txt1->SetValue(CalButtonE->GetLabel());
	}
	else
	{
		m_txt1->AppendText(CalButtonE->GetLabel());
	}
}
void calMain::ButtonPressedClear(wxCommandEvent& evt)
{
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