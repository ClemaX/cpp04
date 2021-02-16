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

void	Peon::getPolymorphed(void) const
{
	std::cout << name << " has been turned into a pink pony!" << std::endl;
}

Peon&			Peon::operator=(Peon const& src)
{
	if (this != &src)
		this->name = src.name;
	return (*this);
}
/*
std::ostream&	operator<<(std::ostream& os, Peon const& src)
{
	os << src.getName() << std::endl;
	return os;
}
 */
