#pragma once

#include <iostream>
#include <string>

#include "ISpaceMarine.hpp"

class ISquad
{
private:

public:
	virtual ~ISquad() {};

	virtual int				getCount() const = 0;
	virtual ISpaceMarine*	getUnit(int index) const = 0;
	virtual int				push(ISpaceMarine* newMarine) = 0;
};
