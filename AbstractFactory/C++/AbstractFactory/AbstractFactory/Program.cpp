#include <iostream>
#include "Client.h"
#include "CocaColaFactory.h"
#include "PepsiFactory.h"
using namespace std;

int main()
{
	CocaColaFactory* cocaColaFactory = new CocaColaFactory();
	Client cocaCola = Client((IAbstractFactory*)cocaColaFactory);
	cocaCola.Run();

	PepsiFactory* pepsiFactory = new PepsiFactory();
	Client pepsi = Client((IAbstractFactory*)pepsiFactory);
	pepsi.Run();

	cout << endl;

	return 0;
}