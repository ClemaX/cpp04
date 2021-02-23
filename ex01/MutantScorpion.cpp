#include "MutantScorpion.hpp"

MutantScorpion::MutantScorpion()
	:	Enemy(100, "MutantScorpion")
{
	std::cout << "* clack clack clack *" << std::endl;
}

MutantScorpion::~MutantScorpion()
{
	std::cout << "* PROUT *" << std::endl;
}

MutantScorpion::MutantScorpion(MutantScorpion const& src)
	:	Enemy(src.hp, src.type)
{
	std::cout << "* clack clack clack *" << std::endl;
}
