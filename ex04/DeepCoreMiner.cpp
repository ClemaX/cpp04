#include "DeepCoreMiner.hpp"

DeepCoreMiner::DeepCoreMiner()
{
}

DeepCoreMiner::~DeepCoreMiner()
{
}

DeepCoreMiner::DeepCoreMiner(DeepCoreMiner const& src)
{
	(void)src;
}

DeepCoreMiner&		DeepCoreMiner::operator=(DeepCoreMiner const& src)
{
	(void)src;
	return *this;
}

void	DeepCoreMiner::mine(IAsteroid* asteroid)
{
	std::cout << "* mining deep... got " << asteroid->beMined(this) << " *"
		<< std::endl;
}

std::ostream&	operator<<(std::ostream& os, DeepCoreMiner const& src)
{
	(void)src;
	os << "DeepCoreMiner";
	return os;
}
