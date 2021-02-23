#include "Enemy.hpp"

Enemy::Enemy()
	:	hp(0),
		type("")
{
}

Enemy::~Enemy()
{
}

Enemy::Enemy(int hp, std::string const& type)
	:	hp(hp),
		type(type)
{
}

Enemy::Enemy(Enemy const& src)
	:	hp(src.hp),
		type(src.type)
{
}

Enemy&		Enemy::operator=(Enemy const& src)
{
	if (this != &src)
	{
		hp = src.hp;
		type = src.type;
	}
	return *this;
}

void		Enemy::takeDamage(int amount)
{
	if (amount > hp)
		amount = hp;
	if (amount > 0)
		hp -= amount;
}

std::ostream&	operator<<(std::ostream& os, Enemy const& src)
{
	os << src.getType() << " has " << src.getHP() << " hitpoints" << std::endl;
	return os;
}
