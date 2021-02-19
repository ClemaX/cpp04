#pragma once

#include <iostream>
#include <string>

#include "AMateria.hpp"

class IMateriaSource
{
private:

public:
	IMateriaSource() {};
	virtual ~IMateriaSource() {};

	IMateriaSource(IMateriaSource const& src);

	IMateriaSource&	operator=(IMateriaSource const& rhs);

	virtual void		learnMateria(AMateria* materia) = 0;
	virtual AMateria*	createMateria(std::string const& type) = 0;
};

std::ostream&	operator<<(std::ostream& os, IMateriaSource const& src);
