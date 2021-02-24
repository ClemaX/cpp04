#pragma once

#include <iostream>
#include <string>

#include "AMateria.hpp"

class AMateria;

class ICharacter
{
private:

public:
	ICharacter() {};
	virtual ~ICharacter() {};

	ICharacter(ICharacter const& src);

	ICharacter&	operator=(ICharacter const& rhs);

	virtual std::string const&	getName() const = 0;

	virtual void	equip(AMateria* materia) = 0;
	virtual void	unequip(unsigned int index) = 0;
	virtual void	use(unsigned int index, ICharacter& target) = 0;
};
