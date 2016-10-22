#include "Builder.h"
#include "IHousePart.h"

void Builder::BuildBasement()
{
	house.Add((IHousePart*)new Basement());
}

void Builder::BuildStorey()
{
	house.Add((IHousePart*)new Storey());
}

void Builder::BuildRoof()
{
	house.Add((IHousePart*)new Roof());
}

House Builder::GetResult()
{
	return house;
}
