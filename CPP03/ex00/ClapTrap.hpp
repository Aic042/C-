#ifndef CLAPTRAP
# define CLAPTRAP

# include <stdio.h>
# include <iostream> // To use cout
# include <cctype>

class Claptrap
{
    private:
        int Hit_points = 10;
        int Energy_points = 10;
        int Attack_Damage = 0;
    public:
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};


#endif