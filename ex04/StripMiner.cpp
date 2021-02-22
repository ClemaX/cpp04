#include "StripMiner.hpp"

StripMiner::StripMiner()
{
}

StripMiner::~StripMiner()
{
}

StripMiner::StripMiner(StripMiner const& src)
{
	(void)src;
}

StripMiner&		StripMiner::operator=(StripMiner const& src)
{
	(void)src;
	return *this;
}

void	StripMiner::mine(IAsteroid* asteroid)
{
	std::cout << "* mining deep... got " << asteroid->beMined(this) << " *"
		<< std::endl;
}

std::ostream&	operator<<(std::ostream& os, StripMiner const& src)
{
	(void)src;
	os << "StripMiner";
	return os;
}
