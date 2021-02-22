#include "Asteroid.hpp"
#include "Comet.hpp"

#include "DeepCoreMiner.hpp"
#include "StripMiner.hpp"

#include "MiningBarge.hpp"

int main()
{
	IAsteroid		*asteroid = new Asteroid();
	IAsteroid		*comet = new Comet();

	DeepCoreMiner	*dcMiner = new DeepCoreMiner();
	StripMiner		*sMiner = new StripMiner();

	MiningBarge		barge = MiningBarge();

	std::cout << *dcMiner << std::endl << std::endl;
	std::cout << "Asteroid: " << std::endl;
	dcMiner->mine(asteroid);
	std::cout << std::endl <<  "Comet: " << std::endl;
	dcMiner->mine(comet);

	std::cout << std::endl;

	std::cout << *sMiner << std::endl << std::endl;
	std::cout << "Asteroid: " << std::endl;
	sMiner->mine(asteroid);
	std::cout << std::endl <<  "Comet: " << std::endl;
	sMiner->mine(comet);

	std::cout << std::endl;

	barge.equip(dcMiner);
	barge.equip(sMiner);

	std::cout << barge << std::endl << std::endl;
	std::cout << "Asteroid: " << std::endl;
	barge.mine(asteroid);
	std::cout << std::endl <<  "Comet: " << std::endl;
	barge.mine(comet);

	//delete dcMiner;
	//delete sMiner;

	delete asteroid;
	delete comet;

	//system("../leaks.sh tests");

	return 0;
}
