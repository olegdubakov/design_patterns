#pragma once
#include "Product.h"

class Factory
{
public:
	virtual Product* FactoryMethod() = 0;
};