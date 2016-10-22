#pragma once
#include "AbstractFactory.h"
#include "PepsiBottle.h"
#include "PepsiWater.h"

class PepsiFactory : IAbstractFactory
{
public:
	virtual IAbstractWater* CreateWater();
	virtual IAbstractBottle* CreateBottle();
};
