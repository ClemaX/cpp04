#pragma once

#include <iostream>
#include <string>

#include "AMateria.hpp"

class Ice	:	virtual public AMateria
{
private:

public:
	Ice();
	~Ice();

	Ice(std::string const& type);
	Ice(Ice const& src);

	virtual Ice&	operator=(AMateria const& src);

	virtual Ice*	clone() const;
	virtual void	use(ICharacter& target);
};
