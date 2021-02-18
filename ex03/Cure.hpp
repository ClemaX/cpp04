#pragma once

#include <iostream>
#include <string>

#include "AMateria.hpp"

class Cure	:	virtual public AMateria
{
private:

public:
	Cure();
	~Cure();

	Cure(Cure const& src);

	virtual Cure&	operator=(AMateria const& src);

	virtual Cure*	clone() const;
	virtual void	use(ICharacter& target);
};
