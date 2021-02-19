#include "Asteroid.hpp"
#include "Comet.hpp"

#include "DeepCoreMiner.hpp"
#include "StripMiner.hpp"

int main()
{
    IAsteroid   *asteroid = new Asteroid();

    delete asteroid;
    return 0;
}