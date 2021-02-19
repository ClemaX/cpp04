#include "DeepCoreMiner.hpp"

DeepCoreMiner::DeepCoreMiner()
{
	// TODO: Implement default contructor
}

DeepCoreMiner::~DeepCoreMiner()
{
	// TODO: Implement default destructor
}

DeepCoreMiner::DeepCoreMiner(DeepCoreMiner const& src)
{
	// TODO: Implement copy contructor
}

DeepCoreMiner&		DeepCoreMiner::operator=(DeepCoreMiner const& src)
{
	// TODO: Implement = operator
	return *this;
}

void	DeepCoreMiner::mine(IAsteroid* asteroid)
{
	std::cout << "* mining deep... got " << asteroid->beMined(this) << " *"
		<< std::endl;
}

std::ostream&	operator<<(std::ostream& os, DeepCoreMiner const& src)
{
	// TODO: Implement << operator
	return os;
}
