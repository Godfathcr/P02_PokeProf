#include "SortExample1.h"
#include <iostream>
#include <ostream>
#include<string>

using namespace std;

SortExample1::SortExample1()
{
	accuracy = 100;
	nom = "Exemple 1";
	description = "Dommage à l'ennemi";
}

SortExample1::~SortExample1()
{
}

void SortExample1::activation(Prof &toi, Prof &ennemi)
{
	int dommage = -2 * toi.getAttaquePuissance() / ennemi.getDefense();
	ennemi.setVie(dommage);
	cout<<toi.getNom()<<" utilise "<<nom<<endl<< ennemi.getNom() << " a recu "<<dommage<<" hp de dommage"<<endl;
}

