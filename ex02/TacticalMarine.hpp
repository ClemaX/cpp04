#pragma once

#include <iostream>
#include <string>

#include "ISpaceMarine.hpp"

class TacticalMarine	:	virtual public ISpaceMarine
{
private:

public:
	TacticalMarine();
	~TacticalMarine();

	TacticalMarine(TacticalMarine const& src);

	TacticalMarine&	operator=(TacticalMarine const& rhs);

	virtual TacticalMarine* clone() const;

	virtual void	battleCry() const;
	virtual void	rangedAttack() const;
	virtual void	meleeAttack() const;
};

std::ostream&	operator<<(std::ostream& os, TacticalMarine const& src);

