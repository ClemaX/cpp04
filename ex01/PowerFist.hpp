#pragma once

#include <iostream>
#include <string>

class PowerFist
{
private:

public:
	PowerFist();
	~PowerFist();

	PowerFist(PowerFist const& src);

	PowerFist&	operator=(PowerFist const& rhs);
};

std::ostream&	operator<<(std::ostream& os, PowerFist const& src);

