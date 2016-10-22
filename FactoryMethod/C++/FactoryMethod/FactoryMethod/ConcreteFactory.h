#pragma once
#include "Factory.h"
#include "ConcreteProduct.h"

class ConcreteFactory : public Factory
{
public:
	Product* FactoryMethod();
};
