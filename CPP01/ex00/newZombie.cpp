#include "lib.hpp"

Zombie* newZombie(std::string name)
{
	Zombie *zombie = new Zombie;
	zombie->zombie_name = name;
    return (zombie);
}