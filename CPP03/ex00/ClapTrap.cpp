#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->Bot_Name = name;
	this->Hit_points = 10;
	this->Energy_points = 10;
	this->Attack_Damage = 0;
	std::cout << "ClapTrap " << this->Bot_Name << " has been constructed" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->Bot_Name << " has been deconstructed" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->Hit_points <= 0)
	{
		std::cout << "ClapTrap " << this->Bot_Name << " is already dead!" << std::endl;
		return;
	}
	if(this->Energy_points <= 0)
	{
		std::cout << "ClapTrap " << this->Bot_Name << " has no energy left to attack!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->Bot_Name << " attacks " << target << " causing " << this->Attack_Damage << " points of damage!" << std::endl;
	this->Energy_points -= 1;
	std::cout << "ClapTrap " << this->Bot_Name << " has " << this->Energy_points << " energy points left!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->Hit_points <= 0)
	{
		std::cout << "ClapTrap " << this->Bot_Name << " is already dead!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->Bot_Name << " has been attacked " << " causing " << amount << " points of health lost!" << std::endl;
	this->Hit_points -= amount;
	if(this->Hit_points < 0)
		this->Hit_points = 0;
	std::cout << "ClapTrap " << this->Bot_Name << " has " << this->Hit_points << " Hit points left!" << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(this->Energy_points <= 0)
	{
		std::cout << "ClapTrap " << this->Bot_Name << " has no energy left to repair!" << std::endl;
		return;
	}
	if(this->Hit_points <= 0)
	{
		std::cout << "ClapTrap " << this->Bot_Name << " is already dead!" << std::endl;
		return;
	}

	std::cout << "ClapTrap " << this->Bot_Name << " has repaired itself by " << amount << std::endl;
	this->Energy_points -= 1;
	this->Hit_points += amount;
	std::cout << "ClapTrap " << this->Bot_Name << " has " << this->Hit_points << " Hit points left!" << std::endl;
	std::cout << "ClapTrap " << this->Bot_Name << " has " << this->Energy_points << " Energy points left!" << std::endl;
}
