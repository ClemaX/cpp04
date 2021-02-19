#pragma once

#include <iostream>
#include <string>

#include "IAsteroid.hpp"
#include "DeepCoreMiner.hpp"
#include "StripMiner.hpp"

class Comet	:	virtual public IAsteroid
{
protected:
	std::string	name;

public:
	Comet();
	~Comet();

	Comet(Comet const& src);

	Comet&	operator=(Comet const& rhs);

	inline virtual std::string const&	getName() { return name; }

	virtual std::string const&	beMined(DeepCoreMiner const* laser) const;
	virtual std::string const&	beMined(StripMiner const* laser) const;
};

std::ostream&	operator<<(std::ostream& os, Comet const& src);

