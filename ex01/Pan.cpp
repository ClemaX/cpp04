#include "Pan.hpp"

Pan::Pan()
	:	AWeapon("Pan", 1, 5)
{
}

Pan::~Pan()
{
}

void	Pan::attack() const
{
	std::cout << "* SCHCLONG *" << std::endl;
}
