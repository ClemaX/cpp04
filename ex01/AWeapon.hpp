#pragma once

#include <iostream>
#include <string>

class AWeapon
{
private:
	std::string	name;
	int			apCost;
	int			damage;

public:
	AWeapon();
	virtual ~AWeapon();

	AWeapon(std::string const& name, int apCost, int damage);
	AWeapon(AWeapon const& src);

	AWeapon&	operator=(AWeapon const& rhs);

	inline std::string const&	getName() const { return (name); };
	inline int					getAPCost() const { return (apCost); };
	inline int					getDamage() const { return (damage); };

	virtual void	attack() const = 0;
};

std::ostream&	operator<<(std::ostream& os, AWeapon const& src);

