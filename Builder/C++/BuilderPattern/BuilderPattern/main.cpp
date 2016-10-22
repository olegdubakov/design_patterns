#include "Builder.h"
#include "Director.h"

void main()
{
	Builder* builder = new Builder;
	AbstractBuilder* abstractBuilder = (AbstractBuilder*)builder;
	
	Director director = Director(abstractBuilder);
	director.Build();

	House house = builder->GetResult();

	cin;
}