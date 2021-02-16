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

	Peon&	operator=(Peon const& rhs);

	void	getPolymorphed() const;
};
/*
std::ostream&	operator<<(std::ostream& os, const Peon& src);
 */
