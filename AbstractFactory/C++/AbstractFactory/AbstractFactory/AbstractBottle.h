#pragma once
#include <iostream>
#include "AbstractWater.h"
using namespace std;

class IAbstractBottle
{
public:
	virtual void Interact(IAbstractWater *water) = 0;
};
