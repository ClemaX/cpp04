#include "Character.hpp"
#include "RadScorpion.hpp"
#include "MutantScorpion.hpp"

#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Pan.hpp"

int main()
{
	Character*	me = new Character("Character");

	std::cout << *me;

	Enemy*	scorpion = new RadScorpion();
	Enemy*	superMutant = new SuperMutant();
	Enemy*	mutantScorpion = new MutantScorpion();

	const PlasmaRifle	plasmaRifle = PlasmaRifle();
	const PowerFist		powerFist = PowerFist();
	const Pan			pan = Pan();

	me->equip(&plasmaRifle);
	std::cout << *me << std::endl;
	me->attack(superMutant);

	me->equip(&powerFist);
	me->attack(scorpion);
	std::cout << *me << std::endl;

	me->equip(&plasmaRifle);
	std::cout << *me << std::endl;

	me->attack(scorpion);
	std::cout << *me << std::endl;

	me->attack(scorpion);
	std::cout << *me << *mutantScorpion << std::endl;

	std::cout << *mutantScorpion;
	me->attack(mutantScorpion);
	std::cout << *me << *mutantScorpion << std::endl;

	me->equip(&pan);
	me->attack(mutantScorpion);
	std::cout << *me << *mutantScorpion << std::endl;

	delete me;
	delete mutantScorpion;
	delete superMutant;

	std::cout << std::endl;

	// system("../leaks.sh tests");

	return 0;
}
