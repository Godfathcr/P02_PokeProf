#include <iostream>
#include "vecteur.h"
#include "sort.h"


using namespace std;;
class Prof
{
protected:
	int vie;
	string nom;
	int vitesse;
	int attaquePuissance;
	int defense;
	const int vitesseBase;
	const int attaquePuissanceBase;
	const int defenseBase;
	const int vieBase;
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

	int setVitesse(int vitesse);
	int getVitesse();

	int getAttaquePuissance();
	int setAttaquePuissance(int attaque);

	int getDefense();
	int setDefense(int def);

	int getDefenseBase();
	int getVitesseBase();
	int getAttaquePuissanceBase();
	int getVieBase();


	int getEtatEffet();
	int setEtatEffet(int etat);

	string getSprite();
	
	Vecteur<Sort> getSort();

	void afficher();
};

