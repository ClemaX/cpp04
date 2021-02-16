#pragma once

#include <iostream>
#include <string>

class Peon
{
private:

public:
	Peon();
	~Peon();

	Peon(const Peon& src);

	Peon&	operator=(const Peon& rhs);
};

std::ostream&	operator<<(std::ostream& os, const Peon& src);
