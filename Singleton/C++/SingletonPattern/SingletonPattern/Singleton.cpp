#include "Singleton.h"


Singleton::Singleton()
{
	value = 0;
}

int Singleton::GetValue()
{
	return value;
}

void Singleton::SetValue(int _value)
{
	value = _value;
}

Singleton* Singleton::Instance()
{
	if (!instance)
	{
		instance = new Singleton;
	}
	return instance;
}