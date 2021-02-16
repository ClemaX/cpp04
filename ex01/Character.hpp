#pragma once

#include <iostream>
#include <string>

#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
protected:
	int				ap;
	std::string		name;
	AWeapon const*	weapon;

public:
	Character();
	~Character();

	Character(std::string const& name);
	Character(Character const& src);

	Character&	operator=(Character const& rhs);

	inline int					getAP() const { return ap; };
	inline std::string const&	getName() const { return name; };
	inline AWeapon const*		getWeapon() const { return weapon; };

	void	recoverAP();
	void	equip(AWeapon *newWeapon);
	void	attack(Enemy *enemy);
};

std::ostream&	operator<<(std::ostream& os, Character const& src);

