#pragma once
#include "IBaseCommand.h"

class MinusCommand :public IBaseCommand
{
	virtual float conversion(float number1, float number2);
};

