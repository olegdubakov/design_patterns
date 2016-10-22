#pragma once

class Prototype
{
public:
	int id;

	Prototype(int Id);
	virtual Prototype* Clone() = 0;
};