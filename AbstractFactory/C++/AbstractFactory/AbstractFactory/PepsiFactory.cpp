#include "PepsiFactory.h"

IAbstractBottle* PepsiFactory::CreateBottle()
{
	PepsiBottle* pepsiBottle = new PepsiBottle();
	return (IAbstractBottle*)pepsiBottle;
}

IAbstractWater* PepsiFactory::CreateWater()
{
	PepsiWater* pepsiWater = new PepsiWater();
	return (IAbstractWater*)pepsiWater;
}