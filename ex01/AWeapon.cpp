#include "AWeapon.hpp"

AWeapon::AWeapon()
	:	name(""),
		apCost(0),
		damage(0)
{
}

AWeapon::~AWeapon()
{
}

AWeapon::AWeapon(std::string const& name, int apCost, int damage)
	:	name(name),
		apCost(apCost),
		damage(damage)
{
}

AWeapon::AWeapon(AWeapon const& src)
	:	name(src.name),
		apCost(src.apCost),
		damage(src.damage)
{
}

AWeapon&		AWeapon::operator=(AWeapon const& src)
{
	if (this != &src)
	{
		name = src.name;
		apCost = src.apCost;
		damage = src.damage;
	}
	return *this;
}

std::ostream&	operator<<(std::ostream& os, AWeapon const& src)
{
	os << src.getName() << ": apCost: " << src.getAPCost()
		<< ", damage: " << src.getDamage() << std::endl;
	return os;
}
