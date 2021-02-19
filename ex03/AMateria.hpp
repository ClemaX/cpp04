#pragma once

#include <iostream>
#include <string>

#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
	std::string		type;
	unsigned int	xp;

	AMateria();

	AMateria(std::string const& type);
	AMateria(std::string const& type, unsigned int xp);

public:
	virtual ~AMateria() {};

	inline std::string const&	getType() const { return type; };
	inline unsigned int			getXP() const { return xp; };

	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter& target);
};

std::ostream&	operator<<(std::ostream& os, AMateria const& src);
