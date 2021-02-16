#pragma once

#include <iostream>
#include <string>

#include "AWeapon.hpp"

class PlasmaRifle : virtual public AWeapon
{
private:

public:
	PlasmaRifle();

	virtual void	attack() const;
};
