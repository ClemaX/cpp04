#pragma once

#include <iostream>
#include <string>

#include "IAsteroid.hpp"
#include "DeepCoreMiner.hpp"
#include "StripMiner.hpp"

class Asteroid	:	virtual public IAsteroid
{
protected:
	std::string	name;

public:
	Asteroid();
	~Asteroid();

	Asteroid(Asteroid const& src);

	Asteroid&	operator=(Asteroid const& rhs);

	inline virtual std::string const&	getName() const { return name; }

	virtual std::string beMined(DeepCoreMiner const* laser) const;
	virtual std::string	beMined(StripMiner const* laser) const;
};

std::ostream&	operator<<(std::ostream& os, Asteroid const& src);

