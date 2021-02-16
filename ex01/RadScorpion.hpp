#pragma once

#include <iostream>
#include <string>

#include "Enemy.hpp"

class RadScorpion	:	virtual public Enemy
{
private:

public:
	RadScorpion();
	~RadScorpion();

	RadScorpion(RadScorpion const& src);
};
