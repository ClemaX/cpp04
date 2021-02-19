#include "Cure.hpp"

Cure::Cure()
	:	AMateria("Cure")
{
}

Cure::~Cure()
{
}

Cure::Cure(Cure const& src)
	:	AMateria("Cure", src.xp)
{
	// TODO: Implement copy contructor
}

Cure&		Cure::operator=(AMateria const& src)
{
	if (this != &src)
	{
		type = "Cure";
		xp = src.getXP();
	}
	return *this;
}

Cure*		Cure::clone() const
{
	return new Cure(*this);
}

void		Cure::use(ICharacter& target)
{
	// TODO: Print target name
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	AMateria::use(target);
}
