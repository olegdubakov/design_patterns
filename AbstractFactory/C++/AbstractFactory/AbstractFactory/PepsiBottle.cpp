#include "PepsiBottle.h"

void PepsiBottle::Interact(IAbstractWater *water)
{
	cout << "Pepsi bottle and " << water->GetWater() << " water" << endl;
}