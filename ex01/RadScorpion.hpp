#pragma once

#include <iostream>
#include <string>

#include "Enemy.hpp"

class RadScorpion	:	virtual public Enemy
{
private:

public:
	RadScorpion();
	virtual ~RadScorpion();

	RadScorpion(RadScorpion const& src);
};
