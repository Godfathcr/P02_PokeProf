#include "ProfExample1.h"
#include "Sort.h"
#include <iostream>
#include <string>



ProfExample1::ProfExample1()
{
	const int vieBase = 100;
	const int defenseBase = 70;
	const int vitesseBase = 50;
	const int attaquePuissanceBase = 30;
	etat = 1;
	nom = "Exemple"

}


ProfExample1::~ProfExample1()
{
}




void ProfExample1::afficher() {
	cout << "----Test classe Prof----" << endl;

	cout << "Votre Poke-Prof est : " << endl;
	cout << nom << endl;
	cout << "Niveau de vie : " << vie << endl;
	cout << "Defense : " << defense << endl;
	cout << "Etat : " << endl;
	if (etat == 1)cout << "Neutre" << endl;
	if (etat == 2)cout << "Saoul" << endl;
	if (etat == 3)cout << "Etourdis" << endl;
	if (etat == 4)cout << "Hyperactif" << endl;
}