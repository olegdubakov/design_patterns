#include "Client.h"

Client::Client(IAbstractFactory *factory)
{
	bottle = factory->CreateBottle();
	water = factory->CreateWater();
}

void Client::Run()
{
	bottle->Interact(water);
}