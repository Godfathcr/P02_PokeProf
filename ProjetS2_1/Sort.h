#pragma once
#include "Prof.h"
class Sort
{
public:
	Sort();
	virtual void activation(Prof &toi, Prof &ennemi)=0;
	virtual ~Sort();
	void setAccuracy(int m_accuracy);
	int getAccuracy();
private:
	int accuracy;
};

