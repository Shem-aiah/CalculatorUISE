#include "CalculatorProcessor.h"
#include <vector>
#include "wx/wx.h"

CalculatorProcessor::CalculatorProcessor() 
{
	addCommand = new AddCommand;
	Bases.push_back(addCommand);
	minCommand = new MinusCommand;
	Bases.push_back(minCommand);
	multiCommand = new MultCommand;
	Bases.push_back(multiCommand);
	divCommand = new DivCommand;
	Bases.push_back(divCommand);
	PerCommand = new PercentCommand;
	Bases.push_back(PerCommand);
	squareCommand = new SqrtCommand;
	Bases.push_back(squareCommand);
}

