#include "sortDefense.h"



SortDefense::SortDefense()
{
	accuracy = 100;
	nom = "Defendre";
	description = "Augument la defense";

}


SortDefense::~SortDefense()
{
}

void SortDefense::activation(Prof & toi, Prof & ennemi)
{
	toi.setDefense(toi.getDefense()*1.25);
}
