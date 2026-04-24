#include "FragTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap("Scavtrap")
{
    this->Scav_Name = name;
    std::cout << "ScavTrap ha sido Scav-creado!!" << std::endl;
    this->set_stats(100, 50, 20);
}
ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap ha sido Scav-eliminado" << std::endl;
}
void ScavTrap::guardGate()
{
    std::cout << this->Scav_Name << " is Gate Keeper mode!" << std::endl;
}

