#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "IMateriaSource.hpp"

class MateriaSource	:	IMateriaSource
{
private:
	static unsigned int		materiesSize;
	std::vector<AMateria*>	materies;

public:
	MateriaSource();
	~MateriaSource();

	MateriaSource(MateriaSource const& src);

	MateriaSource&	operator=(MateriaSource const& rhs);

	virtual void		learnMateria(AMateria* materia);
	virtual AMateria*	createMateria(std::string const& type);
};

std::ostream&	operator<<(std::ostream& os, MateriaSource const& src);

