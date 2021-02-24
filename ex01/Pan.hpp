#pragma once

#include <iostream>
#include <string>

#include "AWeapon.hpp"

class Pan : virtual public AWeapon
{
private:

public:
	Pan();
	virtual ~Pan();

	virtual void	attack() const;
};
