#include "CocaColaBottle.h"

void CocaColaBottle::Interact(IAbstractWater *water)
{
	cout << "CocaCola bottle and " << water->GetWater() << " water" << endl;
}