#pragma once

#include <iostream>
#include <string>

class Character
{
private:

public:
	Character();
	~Character();

	Character(Character const& src);

	Character&	operator=(Character const& rhs);
};

std::ostream&	operator<<(std::ostream& os, Character const& src);

