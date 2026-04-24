#include "FragTrap.hpp"


int main()
{
    ClapTrap Clanker("Clankah");
    ScavTrap Guard("Boki");
    FragTrap Fragoneta("Mate");
    // Clanker.attack("The guard");
    Guard.guardGate();
    Guard.takeDamage(100);
    // Clanker.takeDamage(50);
    // Clanker.beRepaired(1);
    Fragoneta.takeDamage(2);
    Fragoneta.highFivesGuys();
    return (0);
}
