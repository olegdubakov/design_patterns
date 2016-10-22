#pragma once
#include "Builder.h"
#include "House.h"

class Director 
{
private:
	AbstractBuilder* builder;
public:
	Director(AbstractBuilder* abstractBuilder);

	void Build();
};
