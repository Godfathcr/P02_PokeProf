#pragma once
#include "Prof.h"
#include <string.h>
#include <string>
class Sort
{
public:
	Sort();
	virtual void activation(Prof &toi, Prof &ennemi)=0;
	virtual ~Sort();
	void setAccuracy(int m_accuracy);
	int getAccuracy();
protected:
	int accuracy;
	string description;
	string nom;
};

