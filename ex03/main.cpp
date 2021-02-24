#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	MateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	Character* character = new Character("Character");
	AMateria* tmp;

	tmp = src->createMateria("ice");
	character->equip(tmp);

	tmp = src->createMateria("cure");
	character->equip(tmp);

	Character* bob = new Character("bob");

	character->use(0, *bob);
	character->use(1, *bob);

	std::cout << std::endl << "Copy and delete characters" << std::endl;

	Character* characterCopy = new Character(*character);
	Character* bobCopy = new Character();

	*bobCopy = *bob;

	delete character;
	delete bob;
	character = NULL;
	bob = NULL;

	characterCopy->use(0, *bobCopy);
	characterCopy->use(1, *bobCopy);

	std::cout << std::endl << "Copy and delete materiaSource" << std::endl;

	MateriaSource*	srcCopy = new MateriaSource(*src);
	delete src;
	src = NULL;

	characterCopy->equip(srcCopy->createMateria("ice"));

	characterCopy->use(2, *bobCopy);

	std::cout << std::endl << "Assign and delete materiaSource" << std::endl;

	src = new MateriaSource();
	*src = *srcCopy;
	delete srcCopy;
	srcCopy = NULL;

	characterCopy->equip(src->createMateria("cure"));
	characterCopy->use(3, *bobCopy);

	std::cout << std::endl << "Attempt to create and use unknown materia"
		<< std::endl;

	characterCopy->equip(src->createMateria("unknown"));
	characterCopy->use(4, *bobCopy);

	std::cout << std::endl << "Attempt to add too much materies" << std::endl;
	characterCopy->equip(src->createMateria("ice"));

	std::cout << std::endl << "Deleting character copy" << std::endl;
	delete characterCopy;

	std::cout << std::endl << "Deleting bob copy" << std::endl;
	delete bobCopy;

	std::cout << std::endl << "Deleting materia source" << std::endl;
	delete src;

	//system("../leaks.sh tests");
	return 0;
}
