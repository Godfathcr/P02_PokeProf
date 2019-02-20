#pragma once
#include "Sort.h"
class SortDefense :
	public Sort
{
public:
	SortDefense();
	~SortDefense();
	void virtual activation(Prof &toi,Prof &ennemi);
};

