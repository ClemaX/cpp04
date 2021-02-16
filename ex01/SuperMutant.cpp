#include "SuperMutant.hpp"

SuperMutant::SuperMutant()
	:	Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me wany smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const& src)
	:	Enemy(src.hp, src.type)
{
}

void		SuperMutant::takeDamage(int amount)
{
	Enemy::takeDamage(amount - 3);
}
