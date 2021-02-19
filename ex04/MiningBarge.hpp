#pragma once

#include <iostream>
#include <string>

class MiningBarge
{
private:

public:
	MiningBarge();
	~MiningBarge();

	MiningBarge(MiningBarge const& src);

	MiningBarge&	operator=(MiningBarge const& rhs);
};

std::ostream&	operator<<(std::ostream& os, MiningBarge const& src);

