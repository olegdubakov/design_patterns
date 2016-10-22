#pragma once
#include "AbstractBuilder.h"

class Builder : AbstractBuilder
{
private:
	House house;

public:

	void BuildBasement();
	void BuildStorey();
	void BuildRoof();
	House GetResult();
};
