#include "SaMere.hpp"

SaMere::SaMere()
	:	Victim("")
{
	std::cout << "Sa mere!" << std::endl;
}

SaMere::~SaMere()
{
	std::cout << "Ave maria..." << std::endl;
}

SaMere::SaMere(std::string const& name)
	:	Victim(name)
{
	std::cout << "Sa mere!" << std::endl;
}

SaMere::SaMere(SaMere const& src)
{
	name = src.name;
}

SaMere&	SaMere::operator=(SaMere const& src)
{
	if (this != &src)
		this->name = src.name;
	return *this;
}

void	SaMere::getPolymorphed() const
{
	std::cout << name << " has been turned into a pink motherfucking pony!" << std::endl;
}
