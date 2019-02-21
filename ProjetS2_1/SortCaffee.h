#pragma once
#include "Sort.h"
#include<ctime>
class SortCaffee :
	public Sort
{
public:
	SortCaffee();
	~SortCaffee();
	void activation(Prof& , Prof&);
};

