#pragma once

#include <iostream>
#include <string>

#include "AWeapon.hpp"

class PowerFist : virtual public AWeapon
{
public:
	PowerFist();
	virtual ~PowerFist();

	virtual void	attack() const;
};
