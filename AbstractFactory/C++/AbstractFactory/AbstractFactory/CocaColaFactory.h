#pragma once
#include "AbstractFactory.h"
#include "CocaColaBottle.h"
#include "CocaColaWater.h"

class CocaColaFactory : IAbstractFactory
{
public:
	virtual IAbstractWater* CreateWater();
	virtual IAbstractBottle* CreateBottle();
};
