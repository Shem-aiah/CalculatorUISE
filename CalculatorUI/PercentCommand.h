#pragma once
#pragma once
#include "IBaseCommand.h"
class PercentCommand : public IBaseCommand
{
	virtual float conversion(float number1, float number2);
};
