#pragma once

#include <iostream>
#include <string>
#include <deque>

#include "ISquad.hpp"

class Squad	:	virtual public ISquad
{
private:
	std::deque<ISpaceMarine*>	marines;

public:
	Squad();
	~Squad();

	Squad(Squad const& src);

	Squad&	operator=(Squad const& rhs);

	virtual int				getCount() const;
	virtual ISpaceMarine*	getUnit(int index) const;
	virtual int				push(ISpaceMarine* newMarine);
};

std::ostream&	operator<<(std::ostream& os, Squad const& src);
