#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle()
	:	AWeapon("Plasma Rifle", 5, 21)
{
	// TODO: Implement default contructor
}

void	PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
