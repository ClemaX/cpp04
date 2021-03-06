#pragma once

#include <iostream>
#include <string>

#include "Enemy.hpp"

class SuperMutant	:	virtual public Enemy
{
private:

public:
	SuperMutant();
	virtual ~SuperMutant();

	SuperMutant(SuperMutant const& src);

	virtual void	takeDamage(int amount);
};
