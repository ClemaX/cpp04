#pragma once

#include <iostream>
#include <string>

#include "Victim.hpp"

class SaMere : virtual public Victim
{
private:

public:
	SaMere();
	virtual ~SaMere();

	SaMere(std::string const& name);
	SaMere(const SaMere& src);

	SaMere&	operator=(SaMere const& rhs);

	void	getPolymorphed() const;
};
