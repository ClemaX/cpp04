#pragma once

#include <iostream>
#include <string>

class ISpaceMarine
{
private:

public:
	virtual ~ISpaceMarine() {};

	virtual ISpaceMarine*	clone() const = 0;

	virtual void	battleCry() const = 0;
	virtual void	rangedAttack() const = 0;
	virtual void	meleeAttack() const = 0;
};
