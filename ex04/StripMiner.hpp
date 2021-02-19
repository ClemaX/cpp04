#pragma once

#include <iostream>
#include <string>

class StripMiner
{
private:

public:
	StripMiner();
	~StripMiner();

	StripMiner(StripMiner const& src);

	StripMiner&	operator=(StripMiner const& rhs);
};

std::ostream&	operator<<(std::ostream& os, StripMiner const& src);

