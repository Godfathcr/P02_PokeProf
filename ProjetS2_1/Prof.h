#include <iostream>
#include "vecteur.h"
#include "sort.h"


using namespace std;;
class Prof
{
private:
	int vie;
	string nom;
	int attaquePuissance;
	int defense;
	int etatEffet;
	string sprite;
	Vecteur<Sort> sort;

public:
	Prof();
	virtual ~Prof();
	void changerEtat(int etat);
	void attaquer(int sort, Prof ennemi);

	int setVie(int niveauVie);
	int getVie();

	string setNom(string nomProf);
	string getNom();

	int getAttaquePuissance();
	int setAttaquePuissance(int attaque);

	int getDeense();
	int setDefense(int def);

	int getEtatEffet();
	int setEtatEffet(int etat);

	string getSprite();
	
	Vecteur<Sort> getSort();

	void afficher();
};

