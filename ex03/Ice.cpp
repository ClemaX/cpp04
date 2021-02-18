#include "Ice.hpp"

Ice::Ice()
	:	AMateria("Ice")
{
}

Ice::~Ice()
{
}

Ice::Ice(Ice const& src)
	:	AMateria("Ice", src.xp)
{
}

Ice&		Ice::operator=(AMateria const& src)
{
	if (this != &src)
	{
		type = "Ice";
		xp = src.getXP();
	}
	return *this;
}

Ice*		Ice::clone() const
{
	return new Ice(*this);
}

void		Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *"
		<< std::endl;
	AMateria::use(target);
}
