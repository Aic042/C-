#include "ClapTrap.hpp"

void Claptrap::attack(const std::string& target)
{
    std::cout << "ClapTrap " << this->Bot_Name <<  "attacks " << target << " causing " << this->Attack_Damage  << " points of damage!" << std::endl;
    this->Energy_points -= 1;
    std::cout << "Claptrap " << this->Bot_Name << "has " << this->Energy_points << " energy points left!" << std::endl;
}

void Claptrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->Bot_Name <<  "has been attacked " << "causing" << amount  << "points of health lost!" << std::endl;
    this->Hit_points -= amount;
    std::cout << "Claptrap " << this->Bot_Name << " has " << this->Hit_points << " Hit points left!" << std::endl;

}

void Claptrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap " << this->Bot_Name <<  " has repaired itself by " << amount << std::endl;
    this->Energy_points -= 1;
    this->Hit_points += amount;
    std::cout << "Claptrap " << this->Bot_Name << " has " << this->Hit_points << " Hit points left!" << std::endl;
    std::cout << "Claptrap " << this->Bot_Name << " has " << this->Energy_points << " Energy points left!" << std::endl;
}

int main()
{
    Claptrap Clanker("Clankah");
    Clanker.attack("the air");
    std::cout << "Air retaliates! A gust of wind makes the Clanker trip!" << std::endl;
    Clanker.takeDamage(1);
    Clanker.beRepaired(1);

}