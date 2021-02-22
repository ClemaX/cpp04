#include "MiningBarge.hpp"

MiningBarge::MiningBarge()
	:	lasers()
{
	lasers.reserve(lasersSize);
}

MiningBarge::~MiningBarge()
{
	std::vector<IMiningLaser*>::iterator		it = lasers.begin();
	std::vector<IMiningLaser*>::const_iterator	end = lasers.end();

	while (it != end)
		delete *it++;
	lasers.clear();
}

MiningBarge::MiningBarge(MiningBarge const& src)
	:	lasers()
{
	// Cannot deep copy (Interface cannot clone)
	lasers.reserve(src.lasers.capacity());
}

MiningBarge&		MiningBarge::operator=(MiningBarge const& src)
{
	(void)src;
	return *this;
}

void	MiningBarge::equip(IMiningLaser* laser)
{
	if (laser && lasers.size() < lasers.capacity())
		lasers.push_back(laser);
}

void	MiningBarge::mine(IAsteroid* asteroid) const
{
	std::vector<IMiningLaser*>::const_iterator	it = lasers.begin();
	std::vector<IMiningLaser*>::const_iterator	end = lasers.end();

	while (it != end)
	{
		if (*it != NULL)
			(*it)->mine(asteroid);
		it++;
	}
}

std::ostream&	operator<<(std::ostream& os, MiningBarge const& src)
{
	os << "MiningBarge (" << src.getLasersCount()
		<< '/' << src.getLasersCapacity() << " lasers)";
	return os;
}
