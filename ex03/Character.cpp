#include "Character.hpp"

Character::Character()
{
	// TODO: Implement default contructor
}

Character::~Character()
{
	std::vector<AMateria*>::iterator				it = materies.begin();
	const std::vector<AMateria*>::const_iterator	end = materies.end();

	while (it != end)
	{
		delete *it;
		*it++ = NULL;
	}
	materies.clear();
}

Character::Character(std::string const& name)
	:	name(name), materies()
{
	materies.reserve(materiesSize);
}

Character::Character(Character const& src)
	:	name(src.name), materies()
{
	materies.reserve(materiesSize);

	std::vector<AMateria*>::const_iterator	it = src.materies.begin();
	std::vector<AMateria*>::const_iterator	end = src.materies.end();

	while (it != end)
	{
		if (*it)
			materies.push_back((*it)->clone());
		it++;
	}
}

Character&		Character::operator=(Character const& src)
{
	if (this != &src)
	{
		name = src.name;

		std::vector<AMateria*>::const_iterator	it = materies.begin();
		std::vector<AMateria*>::const_iterator	end = materies.end();

		while (it != end)
			delete *it++;
		materies.clear();

		it = src.materies.begin();
		end = src.materies.end();

		while (it != end)
		{
			if (*it)
				materies.push_back((*it)->clone());
			it++;
		}
	}
	return *this;
}

void	Character::equip(AMateria* materia)
{
	if (materia != NULL && materies.size() != materies.capacity())
		materies.push_back(materia);
}

void	Character::unequip(unsigned int index)
{
	if (index < materies.size())
		materies.erase(materies.begin() + index); // TODO: Cleanup
}

void	Character::use(unsigned int index, ICharacter& target)
{
	if (index < materies.size() && materies[index] != NULL)
		materies[index]->use(target);
}

std::ostream&	operator<<(std::ostream& os, Character const& src)
{
	os << src.getName();
	return (os);
}
