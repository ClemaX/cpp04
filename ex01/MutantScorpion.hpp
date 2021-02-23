#pragma once

#include <iostream>
#include <string>

#include "SuperMutant.hpp"
#include "RadScorpion.hpp"

class MutantScorpion
	:	virtual public SuperMutant,
		virtual public RadScorpion
{
private:

public:
	MutantScorpion();
	virtual ~MutantScorpion();

	MutantScorpion(MutantScorpion const& src);
};
