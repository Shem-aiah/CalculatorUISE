#pragma once
#include "MultCommand.h"
#include "IBaseCommand.h"
class MultCommand :public IBaseCommand
{
    virtual float conversion(float number1, float number2);
};


