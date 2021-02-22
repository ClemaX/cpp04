#pragma once

#include <iostream>
#include <string>

class DeepCoreMiner;
class StripMiner;

class IAsteroid
{
private:

public:
	virtual ~IAsteroid() {};

	virtual std::string	const& getName() const = 0;

	virtual std::string	beMined(DeepCoreMiner const* laser) const = 0;
	virtual std::string	beMined(StripMiner const* laser) const = 0;
};
