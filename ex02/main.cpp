#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

int main()
{
	ISpaceMarine *bob = new TacticalMarine;
	ISpaceMarine *jim = new AssaultTerminator;

	Squad *vlc = new Squad;

	std::cout << std::endl << *vlc << std::endl;

	vlc->push(bob);
	vlc->push(bob);
	vlc->push(jim);

	std::cout << std::endl << *vlc << std::endl;

	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine *cur = vlc->getUnit(i);

		std::cout << std::endl;

		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	std::cout << std::endl;

	delete vlc;

	//system("../leaks.sh tests");

	return 0;
}
