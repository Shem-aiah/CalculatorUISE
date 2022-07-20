#pragma once
#include "IBaseCommand.h"


class AddCommand :public IBaseCommand
{
public:
	virtual float conversion(float number1, float number2);
};

