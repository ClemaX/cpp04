#pragma once

#include <iostream>
#include <string>

#include "Victim.hpp"

class Peon : virtual public Victim
{
private:

public:
	Peon();
	~Peon();

	Peon(std::string const& name);
	Peon(const Peon& src);

	void	getPolymorphed(void) const;

	Peon&	operator=(const Peon& rhs);
};
/*
std::ostream&	operator<<(std::ostream& os, const Peon& src);
 */
