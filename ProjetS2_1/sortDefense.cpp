#include "sortDefense.h"



SortDefense::SortDefense()
{
}


SortDefense::~SortDefense()
{
}

void SortDefense::activation(Prof & toi, Prof & ennemi)
{
	toi.setDefense(toi.getDefense()*1.25);
}
