#include "SortExample1.h"



SortExample1::SortExample1()
{
	setAccuracy(100);
}

SortExample1::~SortExample1()
{
}

void SortExample1::activation(Prof &toi, Prof &ennemi)
{
	ennemi.setVie(ennemi.getVie()-2 * toi.getAttaquePuissance() / ennemi.getDefense());
}

