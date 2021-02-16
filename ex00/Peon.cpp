#include "Peon.hpp"

Peon::Peon()
	:	Victim("")
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(std::string const& name)
	:	Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const& src)
{
	name = src.name;
}

Peon&	Peon::operator=(Peon const& src)
{
	if (this != &src)
		this->name = src.name;
	return *this;
}

void	Peon::getPolymorphed() const
{
	std::cout << name << " has been turned into a pink pony!" << std::endl;
}
