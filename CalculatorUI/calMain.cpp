#include "calMain.h"

calMain::calMain() : wxFrame(nullptr, wxID_ANY, "Calculator UI!", wxPoint(50, 50), wxSize(335, 545)) 
{
	CalButton = new wxButton(this, wxID_ANY, "+", wxPoint(10, 70), wxSize(100, 30));
	m_txt1 = new wxTextCtrl(this, wxID_ANY, "Test", wxPoint(10, 10), wxSize(300, 50));
}

calMain::~calMain() 
{
}