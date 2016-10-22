#pragma once
#include "AbstractBottle.h"

class CocaColaBottle : IAbstractBottle
{
public:
	virtual void Interact(IAbstractWater *water);
};
