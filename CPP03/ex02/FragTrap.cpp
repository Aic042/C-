#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    this->set_stats(100, 100, 30);
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    this->Bot_Name = name;
    this->set_stats(100, 100, 30);
    std::cout << "FragTrap " << this->Bot_Name << " constructed" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other)
{
    this->Bot_Name      = other.Bot_Name;
    this->Hit_Points    = other.Hit_Points;
    this->Energy_Points = other.Energy_Points;
    this->Attack_Damage = other.Attack_Damage;
    std::cout << "FragTrap copy constructor called for " << this->Bot_Name << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
        std::cout << "FragTrap operator= called for " << this->Bot_Name << std::endl;
    }
    return (*this);
}
FragTrap::~FragTrap(){
    std::cout << "FragTrap ha sido Frag-eliminado" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    // if(this->Hit_Points <= 0)
    //     std::cout << "FragTrap " << this->Bot_Name << " is already dead!" << std::endl;
    std::cout << this->Bot_Name << " solicita permiso para un choca esos 5!" << std::endl;
}
