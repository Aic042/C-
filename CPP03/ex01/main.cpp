#include "ClapTrap.hpp"


int main()
{
    ClapTrap Clanker("Clankah");
    Clanker.attack("the air");
    std::cout << "Air retaliates! A gust of wind makes the Clanker trip!" << std::endl;
    Clanker.takeDamage(51);
    Clanker.beRepaired(1);
}
