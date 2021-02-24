#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh..." << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const& src)
{
	(void)src;
	std::cout << "* teleports from space *" << std::endl;
}

TacticalMarine&		TacticalMarine::operator=(TacticalMarine const& src)
{
	(void)src;
	return *this;
}

/**
 * @brief Construct a new dynamically allocated copy of this Object.
 *
 * @return A pointer to the cloned Object
 */
TacticalMarine*	TacticalMarine::clone() const
{
	return new TacticalMarine(*this);
}


void	TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!" << std::endl;
}

void	TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void	TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}

std::ostream&	operator<<(std::ostream& os, TacticalMarine const& src)
{
	(void)src;
	std::cout << "Tactical Marine";
	return os;
}
