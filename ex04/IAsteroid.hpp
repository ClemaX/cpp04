#pragma once

#include <iostream>
#include <string>

#include "IMiningLaser.hpp"
#include "DeepCoreMiner.hpp"
#include "StripMiner.hpp"

class IAsteroid
{
private:

public:
	virtual ~IAsteroid();

	virtual std::string	const& getName() const = 0;

	virtual std::string const&	beMined(DeepCoreMiner const* laser) const = 0;
	virtual std::string const&	beMined(StripMiner const* laser) const = 0;
};
