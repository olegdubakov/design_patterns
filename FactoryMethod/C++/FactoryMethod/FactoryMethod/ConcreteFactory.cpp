#include "ConcreteFactory.h"

Product* ConcreteFactory::FactoryMethod()
{
	return new ConcreteProduct();
}