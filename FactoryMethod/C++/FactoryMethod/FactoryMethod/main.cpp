#include "ConcreteFactory.h"
#include "ConcreteProduct.h"

void main()
{
	Product* product = NULL;
	Factory* factory = NULL;
	
	factory = new ConcreteFactory();
	product = factory->FactoryMethod();

	product->PrintNane();
}