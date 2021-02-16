#include "Peon.hpp"

Peon::Peon()
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(const Peon& src)
{
	// TODO: Implement copy contructor
}

Peon&			Peon::operator=(const Peon& src)
{
	// TODO: Implement = operator
	return *this;
}

std::ostream&	operator<<(std::ostream& os, const Peon& src)
{
	// TODO: Implement << operator
	return os;
}
