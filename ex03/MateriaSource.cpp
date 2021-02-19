#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
	:	materies(materiesSize)
{
	// TODO: Implement default contructor
}

MateriaSource::~MateriaSource()
{
	// TODO: Implement default destructor
}

MateriaSource::MateriaSource(MateriaSource const& src)
{
	(void)src;
	// TODO: Implement copy contructor
}

MateriaSource&		MateriaSource::operator=(MateriaSource const& src)
{
	if (this != &src)
	{
		// TODO: Deep copy? this.materies = src.materies;
	}
	return *this;
}

void		MateriaSource::learnMateria(AMateria*const materia)
{
	if (materia != NULL && materies.size() < materies.capacity())
		materies.push_back(materia->clone());
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	const std::vector<AMateria*>::const_iterator	end = materies.end();
	std::vector<AMateria*>::const_iterator			it = materies.begin();
	AMateria*										newMateria = NULL;

	while (it != end && *it != NULL && (*it)->getType() != type)
		it++;

	if (it != end)
		newMateria = (*it)->clone();

	return newMateria;
}

std::ostream&	operator<<(std::ostream& os, MateriaSource const& src)
{
	(void)src;
	os << "Materia Source";
	return os;
}
