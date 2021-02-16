#pragma once

#include <iostream>
#include <string>

class RadScorpion
{
private:

public:
	RadScorpion();
	~RadScorpion();

	RadScorpion(RadScorpion const& src);

	RadScorpion&	operator=(RadScorpion const& rhs);
};

std::ostream&	operator<<(std::ostream& os, RadScorpion const& src);

