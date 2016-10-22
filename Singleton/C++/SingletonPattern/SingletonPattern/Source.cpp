#include "Singleton.h"
#include <iostream>

using namespace std;

Singleton* Singleton::instance = 0;

void main()
{
	Singleton* singleton1 = Singleton::Instance();
	singleton1->SetValue(55);

	Singleton* singleton2 = Singleton::Instance();
	cout << singleton2->GetValue() << endl;
}