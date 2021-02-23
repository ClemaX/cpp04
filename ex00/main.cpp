#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "SaMere.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	SaMere mere("Sa mere");

	std::cout << robert << jim << joe << mere;

	robert.polymorph(jim);
	robert.polymorph(joe);

	//system("../leaks.sh tests");

	return 0;
}
