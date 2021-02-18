#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "ICharacter.hpp"

class Character	:	ICharacter
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
	virtual void	unequip(int index);
	virtual void	use(int index, ICharacter& target);
};
