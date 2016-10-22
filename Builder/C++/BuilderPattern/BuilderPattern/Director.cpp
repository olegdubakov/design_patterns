#include "Director.h"

Director::Director(AbstractBuilder* abstractBuilder)
{
	builder = abstractBuilder;
}

void Director::Build()
{
	builder->BuildBasement();
	builder->BuildStorey();
	builder->BuildRoof();
}