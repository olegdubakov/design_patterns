#pragma once
#include "Basement.h"
#include "Roof.h"
#include "Storey.h"
#include <list>

using namespace std;

class House
{
private:
	list<IHousePart*> house;

public:
	void Add(IHousePart* part);
};

