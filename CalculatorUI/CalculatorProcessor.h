#pragma once
#include <iostream>
#include "wx/wx.h"
#include "calMain.h"

class CalculatorProcessor : public wxFrame
{
public:
	CalculatorProcessor(const CalculatorProcessor&) = delete;

	static CalculatorProcessor& Get()
	{
		return s_Instance;
	}

	wxButton* CalButton() { return CalButtonM; }

private:
	CalculatorProcessor() {}

	wxButton* CalButtonM = nullptr;

	static CalculatorProcessor s_Instance;
};