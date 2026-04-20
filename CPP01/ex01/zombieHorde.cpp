#include "libo.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    int i = 0;
    while (i < N)
    {
        Zombie* horde = new Zombie[i];
        horde[i].announce();
        delete[] horde;
    }
    
}