#pragma once

class Singleton
{
	int value;
	static Singleton  *instance;

protected:
	Singleton();

public:
	int GetValue();
	void SetValue(int _value);

	static Singleton* Instance();
};