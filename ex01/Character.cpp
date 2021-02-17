#include "Character.hpp"

Character::Character()
	:	ap(40),
		name(""),
		weapon(NULL)
{
}

Character::~Character()
{
}

Character::Character(std::string const& name)
	:	ap(40),
		name(name),
		weapon(NULL)
{
}

Character::Character(Character const& src)
	:	ap(src.ap),
		name(src.name),
		weapon(src.weapon)
{
}

Character&		Character::operator=(Character const& src)
{
	if (this != &src)
	{
		ap = src.ap;
		name = src.name;
		weapon = src.weapon;
	}
	return *this;
}

void	Character::recoverAP()
{
	static const int	max = 40;
	int					amount = 10;

	if (ap + amount > max)
		amount = max - ap;
	if (amount > 0)
	{
		std::cout << name << " recovers " << amount << " APs!" << std::endl;
		ap += amount;
	}
}

void	Character::equip(AWeapon *newWeapon)
{
	weapon = newWeapon;
}

void	Character::attack(Enemy *enemy)
{
	if (weapon != NULL)
	{
		const int	apCost = weapon->getAPCost();

		if (ap >= apCost)
		{
			ap -= apCost;

			std::cout << name << " attacks " << enemy->getType() << " with a "
				<< weapon->getName() << std::endl;

			weapon->attack();

			enemy->takeDamage(weapon->getDamage());
			if (enemy->getHP() <= 0)
				delete enemy;
		}
	}
}

std::ostream&	operator<<(std::ostream& os, Character const& src)
{
	AWeapon const*const	weapon = src.getWeapon();

	std::cout << src.getName() << " has " << src.getAP() << " AP and ";
	if (weapon != NULL)
		std::cout << "wields a " << weapon->getName();
	else
		std::cout << "is unarmed";
	std::cout << std::endl;
	return (os);
}
