#pragma once
#include "prof.h"
#include <string.h>
class Sort
{
public:
	Sort();
	virtual void activation(/*Prof &toi, Prof &ennemi*/)=0;
	virtual ~Sort();
	void setAccuracy(int m_accuracy);
	int getAccuracy();
protected:
	int accuracy;
	char* description;
	char* nom;
};

