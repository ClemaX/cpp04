#pragma once

#include <iostream>
#include <string>

class Enemy
{
protected:
	int			hp;
	std::string	type;

public:
	Enemy();
	virtual ~Enemy();

	Enemy(int hp, std::string const& type);
	Enemy(Enemy const& src);

	Enemy&	operator=(Enemy const& rhs);

	inline int					getHP() const { return hp; };
	inline std::string const&	getType() const { return type; };

	virtual void	takeDamage(int amount);
};

std::ostream&	operator<<(std::ostream& os, Enemy const& src);

