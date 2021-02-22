#pragma once

#include <iostream>
#include <string>

#include "IMiningLaser.hpp"

class DeepCoreMiner	:	virtual public IMiningLaser
{
private:

public:
	DeepCoreMiner();
	~DeepCoreMiner();

	DeepCoreMiner(DeepCoreMiner const& src);

	DeepCoreMiner&	operator=(DeepCoreMiner const& rhs);

	virtual void	mine(IAsteroid *asteroid);
};

std::ostream&	operator<<(std::ostream& os, DeepCoreMiner const& src);

