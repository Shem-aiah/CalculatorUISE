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


/*
class CalculatorProcessor
{
static CalculatorProcessor *s_Instance;
public:
	CalculatorProcessor(const CalculatorProcessor&) = delete;

	static CalculatorProcessor* Get()
	{
		if (s_Instance == false)
		{
			s_Instance = new CalculatorProcessor;
		}
		return s_Instance;
	}

	wxButton* CalButton() { return CalButtonM; }

private:
	CalculatorProcessor() {}

	wxButton* CalButtonM = nullptr;


};
*/