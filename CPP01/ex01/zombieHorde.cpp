#include "libo.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if (N <= 0)
        return NULL;
    int i = 0;
    Zombie* horde = new Zombie[N];
    
    while (i < N)
    {
        horde[i].name_setter(name);
        i++;
    }
    return horde;
}