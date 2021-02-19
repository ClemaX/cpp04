#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
	:	materies()
{
	materies.reserve(materiesSize);
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

int			iscmp(std::string const& a, std::string const& b)
{
	std::string::const_iterator			it_a = a.begin();
	std::string::const_iterator			it_b = b.begin();
	const std::string::const_iterator	end_a = a.end();

	while (it_a != end_a && std::tolower(*it_a) == std::tolower(*it_b))
	{
		it_a++;
		it_b++;
	}
	return (std::tolower(*it_b) - std::tolower(*it_a));
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	const std::vector<AMateria*>::const_iterator	end = materies.end();
	std::vector<AMateria*>::const_iterator			it = materies.begin();
	AMateria*										newMateria = NULL;

	while (it != end && *it != NULL && iscmp((*it)->getType(), type) != 0)
		it++;

	if (it != end && *it != NULL)
		newMateria = (*it)->clone();

	return newMateria;
}

std::ostream&	operator<<(std::ostream& os, MateriaSource const& src)
{
	(void)src;
	os << "Materia Source";
	return os;
}
