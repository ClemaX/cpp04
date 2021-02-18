#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I'll be back..." << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const& src)
{
	(void)src;
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator&		AssaultTerminator::operator=(AssaultTerminator const& src)
{
	(void)src;
	return *this;
}

AssaultTerminator*	AssaultTerminator::clone() const
{
	return new AssaultTerminator(*this);
}

void	AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void	AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}

void	AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}

std::ostream&	operator<<(std::ostream& os, AssaultTerminator const& src)
{
	(void)src;
	std::cout << "Assault Terminator";
	return os;
}
