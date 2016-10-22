#pragma once
#include "AbstractFactory.h"

class Client
{
public:
	Client(IAbstractFactory *factory);
	void Run();

private:
	IAbstractBottle *bottle;
	IAbstractWater *water;
};
