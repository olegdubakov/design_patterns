#include "CocaColaFactory.h"

IAbstractBottle* CocaColaFactory::CreateBottle()
{
	CocaColaBottle* cocaColaBottle = new CocaColaBottle();
	return (IAbstractBottle*)cocaColaBottle;
}

IAbstractWater* CocaColaFactory::CreateWater()
{
	CocaColaWater* cocaColaWater = new CocaColaWater();
	return (IAbstractWater*)cocaColaWater;
}