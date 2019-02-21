#include "sortDefense.h"
#include <string>



SortDefense::SortDefense()
{
	accuracy = 100;
	nom = "Defendre";
	description = "Augumente la defense";

}


SortDefense::~SortDefense()
{
}

void SortDefense::activation(Prof & toi, Prof & ennemi)
{
	toi.setDefense(toi.getDefense()*1.25);
	cout << toi.getNom() << " utilise " << nom << endl << "La defense de " << toi.getNom() << " augumente"<<endl;
}
