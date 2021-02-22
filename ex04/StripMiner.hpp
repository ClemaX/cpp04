#pragma once

#include <iostream>
#include <string>

#include "IMiningLaser.hpp"
class StripMiner	:	virtual public IMiningLaser
{
private:

public:
	StripMiner();
	~StripMiner();

	StripMiner(StripMiner const& src);

	StripMiner&	operator=(StripMiner const& rhs);

	virtual void	mine(IAsteroid *asteroid);
};

std::ostream&	operator<<(std::ostream& os, StripMiner const& src);
