#include <iostream>
#include <vector>
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
	int etat;
	string sprite;
	vector<Sort> sort;

public:
	Prof();
	virtual ~Prof();
	void changerEtat();
	void attaquer(int m_sort, Prof ennemi);

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


	int getEtat();
	int setEtat(int m_etat);

	string getSprite();
	
	vector<Sort> getSort();

	//void afficher();
};

