#include "lib.hpp"

Zombie* newZombie(std::string name)
{
	Zombie* zombie = new Zombie("Newzombie");
    return (zombie);
}