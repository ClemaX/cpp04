#include "Asteroid.hpp"

Asteroid::Asteroid()
	:	name("Asteroid")
{
}

Asteroid::~Asteroid()
{
}

Asteroid::Asteroid(Asteroid const& src)
	:	name(src.name)
{
}

Asteroid&		Asteroid::operator=(Asteroid const& src)
{
	if (this != &src)
		name = src.name;
	return *this;
}

std::string	Asteroid::beMined(DeepCoreMiner const* laser) const
{
	return "Dragonite";
}

std::string	Asteroid::beMined(StripMiner const* laser) const
{
	return "Flavium";
}

std::ostream&	operator<<(std::ostream& os, Asteroid const& src)
{
	os << "Asteroid";
	return os;
}
