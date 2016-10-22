#pragma once
#include "Prototype.h"

class ConcretePrototype : public Prototype
{
public:
	ConcretePrototype(int Id) : Prototype(Id) {};

	Prototype* Clone();
};