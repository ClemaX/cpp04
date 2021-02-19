#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "ICharacter.hpp"

class Character	:	virtual public ICharacter
{
private:
	static const unsigned int	materiesSize = 4;

	std::string				name;
	std::vector<AMateria*>	materies;

public:
	Character();
	~Character();

	Character(std::string const& name);
	Character(Character const& src);

	Character&	operator=(Character const& rhs);

	inline virtual std::string const&	getName() const { return name; };

	virtual void	equip(AMateria* materia);
	virtual void	unequip(unsigned int index);
	virtual void	use(unsigned int index, ICharacter& target);
};


std::ostream&	operator<<(std::ostream& os, Character const& src);
