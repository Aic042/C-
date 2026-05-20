#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->Bot_Name = name;
    std::cout << "ScavTrap ha sido Scav-creado!!" << std::endl;
    this->set_stats(100, 50, 20);
}
ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap ha sido Scav-eliminado" << std::endl;
}
void ScavTrap::guardGate()
{
    std::cout << this->Bot_Name << " is Gate Keeper mode!" << std::endl;
}
void ScavTrap::attack(const std::string& target)
{
	if (this->Hit_Points <= 0)
	{
		std::cout << "ScavTrap " << this->Bot_Name << " is already dead!" << std::endl;
		return;
	}
	if(this->Energy_Points <= 0)
	{
		std::cout << "ScavTrap " << this->Bot_Name << " has no energy left to attack!" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->Bot_Name << " attacks " << target << " causing " << this->Attack_Damage << " points of damage!" << std::endl;
	this->Energy_Points -= 1;
	std::cout << "ScavTrap " << this->Bot_Name << " has " << this->Energy_Points << " energy points left!" << std::endl;
}