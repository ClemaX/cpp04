#include "Character.hpp"
#include "RadScorpion.hpp"
#include "MutantScorpion.hpp"

#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

int main()
{
	Character*	me = new Character("me");
	std::cout << *me;

	Enemy*	scorpion = new RadScorpion();
	Enemy*	mScorpion = new MutantScorpion();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	me->equip(pr);
	std::cout << *me;

	std::cout << std::endl;

	me->equip(pf);
	me->attack(scorpion);
	std::cout << *me;

	std::cout << std::endl;

	me->equip(pr);
	std::cout << *me;

	std::cout << std::endl;

	me->attack(scorpion);
	std::cout << *me;

	std::cout << std::endl;

	me->attack(scorpion);
	std::cout << *me;
	std::cout << *mScorpion << *pr;

	std::cout << std::endl;

	std::cout << *mScorpion;
	std::cout << *pr;
	me->attack(mScorpion);
	std::cout << *me << *mScorpion;

	std::cout << std::endl;

	delete me;
	delete pr;
	delete pf;
	delete mScorpion;

	// system("../leaks.sh tests");

	return 0;
}
