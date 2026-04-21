#include "libo.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    int i = 0;
    Zombie* horde = new Zombie[i];
    while (i < N)
    {
        horde[i].zombie_name = name;
        horde[i].announce();
    }
    delete[] horde;
}