#ifndef VECTEUR_H
#define VECTEUR_H

#include <iostream>
#include <fstream>
using namespace std;

template <class V>
class Vecteur
{
private:
	V *tab;
	int index;
	int taille;
	int capacite;

public:
	//Constructeur
	Vecteur();
	//Destructeur
	~Vecteur();

	int getCapacite();
	int getTaille();
	int setTaille(int TailleChoisi);
	int getIndex();
	void setIndex(int IndexChoisi);
	void bouger();


	V& operator [](int i);
	int operator ++();
	int operator --();
	//Ajouter Fin
	void operator +=(V item);
	//Suprrimer Fin
	void operator -=(int i);

	void viderVecteur();
	bool vecteurVide();

	//Affichage 
	//ostream& operator <<(ostream &out, const Vecteur<v> tab);


};

template<class V>
Vecteur<V>::Vecteur()
{
	taille = 0;
	capacite = 2;
	index = 0;
	tab = new V[capacite];

}

template<class V>
Vecteur<V>::~Vecteur()
{
	delete[] tab;
}

template<class V>
int Vecteur<V>::getCapacite()
{
	return capacite;
}

template<class V>
int Vecteur<V>::getTaille()
{
	return taille;
}

template<class V>
int Vecteur<V>::setTaille(int TailleChoisi)
{
	taille = TailleChoisi;
	return taille;
}

template<class V>
int Vecteur<V>::getIndex()
{
	return index;
}

template<class V>
void Vecteur<V>::setIndex(int IndexChoisi)
{
	index = IndexChoisi;
}

template<class V>
void Vecteur<V>::bouger()
{
	for (int i = taille; i > 0; i--)
	{
		if (taille < capacite)
		{
			capacite = capacite * 2;
			V *tab2 = new V[capacite];
			for (int i = 0; i < getTaille(); i++)
			{
				tab2[i] = tab[i];
			}
			delete[] tab;
			tab = tab2;
		}
		tab[i] = tab[i - 1];

	}
}

template<class V>
V& Vecteur<V>::operator[](int i)
{
	return tab[i];
}

template<class V>
int Vecteur<V>::operator++()
{
	if (index < getTaille())
	{
		index++;
	}
	return index;
}

template<class V>
int Vecteur<V>::operator--()
{
	if (index > 0)
	{
		index--;
	}
	return index;
}

template<class V>
void Vecteur<V>::operator+=(V item)
{
	if (taille < capacite)
	{
		capacite = capacite * 2;
		V *tab2 = new V[capacite];
		for (int i = 0; i < getTaille(); i++)
		{
			tab2[i] = tab[i];
		}
		delete[] tab;
		tab = tab2;
	}
	tab[taille] = item;
	taille++;
}

template<class V>
void Vecteur<V>::operator-=(int i)
{
	if (i < taille || i > 0)
	{
		tab[i] = tab[i + 1];
	}
	taille = taille - 1;
}


template<class V>
void Vecteur<V>::viderVecteur()
{
	delete[] tab;
	taille = 0;
	index = 0;

}

template<class V>
bool Vecteur<V>::vecteurVide()
{
	if (taille != 0)
	{
		return false;
	}

	return true;
}




template<class v>
ostream& operator<< (ostream & out, Vecteur<v> &c)
{
	for (int i = 0; i < c.getTaille(); i++)
	{
		out << c[i] << endl;
	}
	return out;
}

#endif

