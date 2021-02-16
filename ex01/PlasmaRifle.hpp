#pragma once

#include <iostream>
#include <string>

class PlasmaRifle
{
private:

public:
	PlasmaRifle();
	~PlasmaRifle();

	PlasmaRifle(PlasmaRifle const& src);

	PlasmaRifle&	operator=(PlasmaRifle const& rhs);
};

std::ostream&	operator<<(std::ostream& os, PlasmaRifle const& src);

