#include "AMateria.hpp"

AMateria::AMateria()
	:	type(""),
		xp(0)
{
}

AMateria::AMateria(std::string const& type)
	:	type(type),
		xp(0)
{
}

AMateria::AMateria(std::string const& type, unsigned int xp)
	:	type(type),
		xp(xp)
{
}

void			AMateria::use(ICharacter& target)
{
	(void)target;
	xp += 10;
}

std::ostream&	operator<<(std::ostream& os, AMateria const& src)
{
	os << src.getType() << " xp: " << src.getXP();
	return os;
}
