#pragma once

#include <iostream>
#include <string>

#include "AMateria.hpp"

class ICharacter
{
private:

public:
	ICharacter();
	virtual ~ICharacter() {};

	ICharacter(ICharacter const& src);

	ICharacter&	operator=(ICharacter const& rhs);

	virtual std::string const&	getName() const = 0;

	virtual void	equip(AMateria* m) = 0;
	virtual void	unequip(int idx) = 0;
	virtual void	use(int idx, ICharacter& target) = 0;
};

std::ostream&	operator<<(std::ostream& os, ICharacter const& src);

