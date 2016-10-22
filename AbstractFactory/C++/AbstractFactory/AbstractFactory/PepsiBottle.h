#pragma once
#include "AbstractBottle.h"

class PepsiBottle : IAbstractBottle
{
public:
	virtual void Interact(IAbstractWater *water);
};
