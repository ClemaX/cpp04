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

	inline virtual std::string const&	getName() const { return name; }

	virtual std::string	beMined(DeepCoreMiner const* laser) const;
	virtual std::string	beMined(StripMiner const* laser) const;
};

std::ostream&	operator<<(std::ostream& os, Comet const& src);

