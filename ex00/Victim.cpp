#include "Victim.hpp"

Victim::Victim()
{
}

Victim::~Victim()
{
	std::cout << "Victim " << name << " just died for no apparent reason!"
		<< std::endl;
}

Victim::Victim(const Victim& src)
	:	name(name)
{
	std::cout << "Some random victim called "
		<< name << " appeared!" << std::endl;
}

Victim::Victim(const std::string& name)
	:	name(name)
{
	std::cout << "Some random victim called "
		<< name << " appeared!" << std::endl;
}

void Victim::getPolymorphed() const
{
	std::cout << name << "has been turned into a cute little sheep!"
		<< std::endl;
}

Victim&	Victim::operator=(const Victim& src)
{
	name = src.name;
	return *this;
}

std::ostream&	operator<<(std::ostream& os, const Victim& src)
{
	os << "I'm " << src << " and I like otters!" << std::endl;
	return os;
}
