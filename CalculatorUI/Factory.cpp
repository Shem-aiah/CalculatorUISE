#include "Factory.h"
#include "calMain.h"
#include "wx\wx.h"

//Number Pad
wxButton* Factory::CreateAddButton() {
	wxButton* button;
	button = new wxButton(this, 100, "0", wxPoint(90, 366), wxSize(50, 70));
	button->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &calMain::ButtonPressed0, this);
	return button;
}
wxButton* Factory::CreateOneButton() {
	wxButton* button;
	button = new wxButton(this, 101, "1", wxPoint(30, 296), wxSize(50, 70));
	//button->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &calMain::ButtonPressed0, this);
	return button;
}
wxButton* Factory::CreateTwoButton() {
	wxButton* button;
	button = new wxButton(this, 102, "2", wxPoint(90, 296), wxSize(50, 70));
	return button;
}
wxButton* Factory::CreateThreeButton() {
	wxButton* button;
	button = new wxButton(this, 103, "3", wxPoint(150, 296), wxSize(50, 70));
	return button;
}
wxButton* Factory::CreateFourButton() {
	wxButton* button;
	button = new wxButton(this, 104, "4", wxPoint(30, 226), wxSize(50, 70));
	return button;
}
wxButton* Factory::CreateFiveButton() {
	wxButton* button;
	button = new wxButton(this, 105, "5", wxPoint(90, 226), wxSize(50, 70));
	return button;
}
wxButton* Factory::CreateSixButton() {
	wxButton* button;
	button = new wxButton(this, 106, "6", wxPoint(150, 226), wxSize(50, 70));
	return button;
}
wxButton* Factory::CreateSevenButton() {
	wxButton* button;
	button = new wxButton(this, 107, "7", wxPoint(30, 156), wxSize(50, 70));
	return button;
}
wxButton* Factory::CreateEightButton() {
	wxButton* button;
	button = new wxButton(this, 108, "8", wxPoint(90, 156), wxSize(50, 70));
	return button;
}
wxButton* Factory::CreateNineButton() {
	wxButton* button;
	button = new wxButton(this, 109, "9", wxPoint(150, 156), wxSize(50, 70));
	return button;
}
//Operations
wxButton* Factory::CreatePlusButton() {
	wxButton* button;
	button = new wxButton(this, 1000, "+", wxPoint(269, 366), wxSize(50, 70));
	return button;
}
wxButton* Factory::CreateMinusButton() {
	wxButton* button;
	button = new wxButton(this, 1001, "-", wxPoint(269, 296), wxSize(50, 70));
	return button;
}
wxButton* Factory::CreateEqualsButton() {
	wxButton* button;
	button = new wxButton(this, 1002, "=", wxPoint(269, 436), wxSize(50, 70));
	return button;
}
wxButton* Factory::CreateClearButton() {
	wxButton* button;
	button = new wxButton(this, 1003, "C", wxPoint(100, 70), wxSize(50, 70));
	return button;
}
wxButton* Factory::CreatePMButton() {
	wxButton* button;
	button = new wxButton(this, 1004, "+/-", wxPoint(30, 366), wxSize(50, 70));
	return button;
}
wxButton* Factory::CreateDotButton() {
	wxButton* button;
	button = new wxButton(this, 1005, ".", wxPoint(150, 366), wxSize(50, 70));
	return button;
}
wxButton* Factory::CreateTimesButton() {
	wxButton* button;
	button = CalButtonX = new wxButton(this, 1006, "X", wxPoint(269, 226), wxSize(50, 70));
	return button;
}
wxButton* Factory::CreateDivButton() {
	wxButton* button;
	button = new wxButton(this, 1007, "/", wxPoint(269, 156), wxSize(50, 70));
	return button;
}
wxButton* Factory::CreateClearEButton() {
	wxButton* button;
	button = new wxButton(this, 1008, "CE", wxPoint(50, 70), wxSize(50, 70));
	return button;
}
wxButton* Factory::CreateDeleteButton() {
	wxButton* button;
	button = new wxButton(this, 1009, "Del", wxPoint(150, 70), wxSize(50, 70));
	return button;
}
wxButton* Factory::CreatePerButton() {
	wxButton* button;
	button = new wxButton(this, 1010, "%", wxPoint(1, 70), wxSize(50, 70));
	return button;
}
wxButton* Factory::CreateSqrtButton() {
	wxButton* button;
	button = new wxButton(this, 1011, "x^2", wxPoint(250, 70), wxSize(70, 70));
	return button;
}
wxButton* Factory::CreateFractionButton() {
	wxButton* button;
	button = new wxButton(this, 1012, "1/x", wxPoint(200, 70), wxSize(50, 70));
	return button;
}
