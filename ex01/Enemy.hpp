#pragma once

#include <iostream>
#include <string>

class Enemy
{
private:

public:
	Enemy();
	~Enemy();

	Enemy(Enemy const& src);

	Enemy&	operator=(Enemy const& rhs);
};

std::ostream&	operator<<(std::ostream& os, Enemy const& src);

