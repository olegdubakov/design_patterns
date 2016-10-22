#include "ConcretePrototype.h"

Prototype* ConcretePrototype::Clone()
{
	return new ConcretePrototype(id);
}
