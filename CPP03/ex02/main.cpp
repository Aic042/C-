#include "FragTrap.hpp"


// int main()
// {
//     ClapTrap c("Clankah");
//     ScavTrap s("Boki");
//     FragTrap f("Mate");

//     c.print_stats();
//     s.print_stats();
//     f.print_stats();

//     s.guardGate();
//     f.highFivesGuys();

//     c.attack("wall");
//     c.takeDamage(5);
//     c.beRepaired(2);

//     return 0;
// }

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
