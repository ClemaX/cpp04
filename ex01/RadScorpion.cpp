#include "RadScorpion.hpp"

RadScorpion::RadScorpion()
	:	Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const& src)
	:	Enemy(src.hp, src.type)
{
	std::cout << "* click click click *" << std::endl;
}
