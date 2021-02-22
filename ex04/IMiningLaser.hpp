#pragma once

#include <iostream>
#include <string>

#include "IAsteroid.hpp"

class IMiningLaser
{
private:

public:
	virtual ~IMiningLaser() {};

	virtual void	mine(IAsteroid* asteroid) = 0;
};
