#include "calMain.h"

wxBEGIN_EVENT_TABLE(calMain, wxFrame)
	EVT_BUTTON(100, ButtonPressed)
	EVT_BUTTON(101, ButtonPressed)
wxEND_EVENT_TABLE()

calMain::calMain() : wxFrame(nullptr, wxID_ANY, "Calculator UI!", wxPoint(50, 50), wxSize(335, 545))
{
	wxFont font(15, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
	m_txt1 = new wxTextCtrl(this,wxID_ANY, " ",wxPoint(0, 21), wxSize(322, 50));
	CalButton = new wxButton(this, wxID_ANY, "Standard", wxPoint(0, 1), wxSize(80, 20));
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
	CalButton->SetId(101);
	CalButton->SetFont(font);
	
	CalButton = new wxButton(this, 100, ".", wxPoint(150, 366), wxSize(50, 70));
	CalButton->SetFont(font);
}

calMain::~calMain() 
{
}

void calMain::ButtonPressed(wxCommandEvent& evt) 
{
	if (bFirstClick) {
		m_txt1->SetLabelText(CalButton->GetLabelText());
		bFirstClick = false;
	}
	
	evt.Skip();
}
