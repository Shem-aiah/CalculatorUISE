#include "CalculatorProcessor.h"
#include <vector>
#include "wx/wx.h"

CalculatorProcessor::CalculatorProcessor() {
	addCommand = new AddCommand;
	minCommand = new MinusCommand;
	multiCommand = new MultCommand;
	divCommand = new DivCommand;
	PerCommand = new PercentCommand;
	squareCommand = new SqrtCommand;
}

