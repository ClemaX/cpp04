#include "Character.hpp"

Character::Character()
{
	// TODO: Implement default contructor
}

Character::~Character()
{
	// TODO: Implement default destructor
}

Character::Character(std::string const& name)
	:	name(name), materies(materiesSize)
{
	// TODO: Implement default contructor
}

// TODO: Deep copy materies
Character::Character(Character const& src)
	:	name(src.name) //, materies(src.materies)
{
	// TODO: Implement copy contructor
}

Character&		Character::operator=(Character const& src)
{
	// TODO: Implement = operator
	return *this;
}

void	Character::equip(AMateria* materia)
{
	if (materia != NULL && materies.size() != materies.capacity())
		materies.push_back(materia);
}

void	Character::unequip(int index)
{
	if (index < materies.size())
		materies.erase(materies.begin() + index); // TODO: Cleanup
}

void	Character::use(int index, ICharacter& target)
{
	if (index < materiesSize && materies[index] != NULL)
		materies[index]->use(target);
}
