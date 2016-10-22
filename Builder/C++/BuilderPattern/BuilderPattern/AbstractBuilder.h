#pragma once
#include "House.h"

class AbstractBuilder
{
public:
	virtual void BuildBasement() = 0;
	virtual void BuildStorey() = 0;
	virtual void BuildRoof() = 0;
	virtual House GetResult() = 0;
};
