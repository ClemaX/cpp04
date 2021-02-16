#pragma once

#include <iostream>
#include <string>

class SuperMutant
{
private:

public:
	SuperMutant();
	~SuperMutant();

	SuperMutant(SuperMutant const& src);

	SuperMutant&	operator=(SuperMutant const& rhs);
};

std::ostream&	operator<<(std::ostream& os, SuperMutant const& src);

