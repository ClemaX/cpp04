#pragma once

#include <iostream>
#include <string>

class AWeapon
{
private:

public:
	AWeapon();
	~AWeapon();

	AWeapon(AWeapon const& src);

	AWeapon&	operator=(AWeapon const& rhs);
};

std::ostream&	operator<<(std::ostream& os, AWeapon const& src);

