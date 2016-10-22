#include "Prototype.h"
#include "ConcretePrototype.h"
#include <iostream>

using namespace std;

void main()
{
	Prototype* a = new ConcretePrototype(2);
	Prototype* b = a->Clone();

	cout << b->id << endl;
}