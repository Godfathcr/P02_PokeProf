#include "Prof.h"
#include <iostream>
#include <string>

using namespace std; 

Prof::Prof()
{
}


Prof::~Prof()
{
}

void Prof::changerEtat(int etat)
{
}

void Prof::attaquer(int sort, Prof ennemi)
{

}

int Prof::setVie(int niveauVie)
{
	vie = niveauVie;
	return vie;
}

int Prof::getVie()
{
	return vie;
}

string Prof::setNom(string nomProf)
{
	nom = nomProf;
	return nom;
}

string Prof::getNom()
{
	return nom;
}

int Prof::getAttaquePuissance()
{
	return attaquePuissance;
}

int Prof::setAttaquePuissance(int attaque)
{
	attaquePuissance = attaque;
	return attaquePuissance;
}

int Prof::getDeense()
{
	return defense;
}

int Prof::setDefense(int def)
{
	defense = def;
	return defense;
}

int Prof::getEtatEffet()
{
	return etatEffet;
}

int Prof::setEtatEffet(int etat)
{
	etatEffet = etat;
	if (etat == 1)return etat;
	if (etat == 2)return etat;
	if (etat == 3)return etat;
	if (etat == 4)return etat;
	return etatEffet;
}

string Prof::getSprite()
{
	return sprite;
}

Vecteur<Sort> Prof::getSort()
{
	return Vecteur<Sort>();
}

void Prof::afficher() {
	cout << "----Test classe Prof----" << endl;
	
	cout << "Votre Poke-Prof est : " <<  endl;
	cout << nom << endl;
	cout << "Niveau de vie : " << vie << endl;
	cout << "Defense : " << defense << endl;
	cout << "Etat : " << endl;
	if (etatEffet == 1)cout << "Neutre" << endl;
	if (etatEffet == 2)cout << "Saoul" << endl;
	if (etatEffet == 3)cout << "Etourdis" << endl;
	if (etatEffet == 4)cout << "Hyperactif" << endl;
	
	
}
