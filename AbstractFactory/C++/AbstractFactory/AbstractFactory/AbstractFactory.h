#pragma once
#include "AbstractBottle.h"
#include "AbstractWater.h"

class IAbstractFactory
{
public:
	virtual IAbstractWater* CreateWater() = 0;
	virtual IAbstractBottle* CreateBottle() = 0;
};