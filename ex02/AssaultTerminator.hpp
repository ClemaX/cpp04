#pragma once

#include <iostream>
#include <string>

#include "ISpaceMarine.hpp"

class AssaultTerminator	:	virtual public ISpaceMarine
{
private:

public:
	AssaultTerminator();
	virtual ~AssaultTerminator();

	AssaultTerminator(AssaultTerminator const& src);

	AssaultTerminator&	operator=(AssaultTerminator const& rhs);

	virtual AssaultTerminator*	clone() const;

	virtual void	battleCry() const;
	virtual void	rangedAttack() const;
	virtual void	meleeAttack() const;
};

std::ostream&	operator<<(std::ostream& os, AssaultTerminator const& src);

