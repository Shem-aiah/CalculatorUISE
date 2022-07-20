#pragma once
#include "IBaseCommand.h"

class SqrtCommand :public IBaseCommand
{
	virtual float conversion(float number1, float number2);
};

