#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "IMiningLaser.hpp"

class MiningBarge
{
private:
	static const unsigned int	lasersSize = 4;
	std::vector<IMiningLaser*>	lasers;

public:
	MiningBarge();
	~MiningBarge();

	MiningBarge(MiningBarge const& src);

	MiningBarge&	operator=(MiningBarge const& rhs);

	inline unsigned int	getLasersCount() const { return lasers.size(); };
	inline unsigned int	getLasersCapacity() const { return lasers.capacity(); };

	void	equip(IMiningLaser* laser);
	void	mine(IAsteroid* asteroid) const;
};

std::ostream&	operator<<(std::ostream& os, MiningBarge const& src);

