#pragma once
#include <iostream>
#include <vector>
#include "wx/wx.h"
#include "calMain.h"
#include "IBaseCommand.h"
#include "AddCommand.h"
#include "DivCommand.h"
#include "MinusCommand.h"
#include "FractionCommand.h"
#include "SqrtCommand.h"
#include "PercentCommand.h"
#include "MultCommand.h"

class CalculatorProcessor : public wxFrame
{
public:
	CalculatorProcessor(const CalculatorProcessor&) = delete;

	static CalculatorProcessor& Get()
	{
		return s_Instance;
	}

	wxButton* CalButton() { return CalButtonM; }
	float Add(float number1, float number2) { return number1 + number2; }
	float Minus(float number1, float number2) { return number1 - number2; }
	float Mult(float number1, float number2) { return number1 * number2; }
	float Per(float number1, float number2) { return number1 / number2; }
	float Frac(float number1, float number2) { return number1 / number2; }
	float Sqrt(float number1, float number2) { return number1 / number2; }
	int Mod(int number1, int number2) { return number1 % number2; }
	
	std::vector<IBaseCommand> Bases;
	AddCommand* addCommand;
	MinusCommand* minCommand;
	MultCommand* multiCommand;
	DivCommand* divCommand;
	PercentCommand* PerCommand;
	SqrtCommand* squareCommand;
	FractionCommand* fracCommand;

private:
	CalculatorProcessor() {} //{ return CalculatorProcessor }

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