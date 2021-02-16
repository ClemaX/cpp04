#include "Victim.hpp"

Victim::Victim()
{
}

Victim::~Victim()
{
	std::cout << "Victim " << name << " just died for no apparent reason!"
		<< std::endl;
}

Victim::Victim(Victim const& src)
	:	name(src.name)
{
	std::cout << "Some random victim called "
		<< name << " just appeared!" << std::endl;
}

Victim::Victim(std::string const& name)
	:	name(name)
{
	std::cout << "Some random victim called "
		<< name << " just appeared!" << std::endl;
}

void Victim::getPolymorphed() const
{
	std::cout << name << " has been turned into a cute little sheep!"
		<< std::endl;
}

Victim&	Victim::operator=(Victim const& src)
{
	name = src.name;
	return *this;
}

std::ostream&	operator<<(std::ostream& os, Victim const& src)
{
	os << "I'm " << src.getName() << " and I like otters!" << std::endl;
	return os;
}
