#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
	:	materies()
{
	materies.reserve(materiesSize);
}

MateriaSource::~MateriaSource()
{
	std::vector<AMateria*>::iterator				it = materies.begin();
	const std::vector<AMateria*>::const_iterator	end = materies.end();

	while (it != end)
		delete *it++;
	materies.clear();
}

MateriaSource::MateriaSource(MateriaSource const& src)
	:	materies()
{
	materies.reserve(materiesSize);

	std::vector<AMateria*>::const_iterator	it = src.materies.begin();
	std::vector<AMateria*>::const_iterator	end = src.materies.end();

	while (it != end)
	{
		if (*it != NULL)
			materies.push_back((*it)->clone());
		it++;
	}
}

MateriaSource&		MateriaSource::operator=(MateriaSource const& src)
{

	if (this != &src)
	{
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

void		MateriaSource::learnMateria(AMateria*const materia)
{
	if (materia != NULL && materies.size() < materiesSize)
		materies.push_back(materia->clone());
}

int			iscmp(std::string const& a, std::string const& b)
{
	std::string::const_iterator			it_a = a.begin();
	std::string::const_iterator			it_b = b.begin();
	const std::string::const_iterator	end_a = a.end();

	while (it_a != end_a && std::tolower(*it_a++) == std::tolower(*it_b++))
		;
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
