#include "ScavTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->Bot_Name = name;
	std::cout << "ClapTrap " << this->Bot_Name << " has been constructed" << std::endl;
	set_stats(10, 10, 0);
}

void ClapTrap::set_stats(int Hit_Points, int eng_points, int attack_dmg)
{
	this->Hit_Points = Hit_Points;
	this->Energy_Points = eng_points;
	this->Attack_Damage = attack_dmg;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->Bot_Name << " has been deconstructed" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->Hit_Points <= 0)
	{
		std::cout << "ClapTrap " << this->Bot_Name << " is already dead!" << std::endl;
		return;
	}
	if(this->Energy_Points <= 0)
	{
		std::cout << "ClapTrap " << this->Bot_Name << " has no energy left to attack!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->Bot_Name << " attacks " << target << " causing " << this->Attack_Damage << " points of damage!" << std::endl;
	this->Energy_Points -= 1;
	std::cout << "ClapTrap " << this->Bot_Name << " has " << this->Energy_Points << " energy points left!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->Hit_Points <= 0)
	{
		std::cout << "ClapTrap " << this->Bot_Name << " is already dead!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->Bot_Name << " has been attacked " << " causing " << amount << " points of health lost!" << std::endl;
	this->Hit_Points -= amount;
	if(this->Hit_Points < 0)
		this->Hit_Points = 0;
	std::cout << "ClapTrap " << this->Bot_Name << " has " << this->Hit_Points << " Hit points left!" << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(this->Energy_Points <= 0)
	{
		std::cout << "ClapTrap " << this->Bot_Name << " has no energy left to repair!" << std::endl;
		return;
	}
	if(this->Hit_Points <= 0)
	{
		std::cout << "ClapTrap " << this->Bot_Name << " is already dead!" << std::endl;
		return;
	}

	std::cout << "ClapTrap " << this->Bot_Name << " has repaired itself by " << amount << std::endl;
	this->Energy_Points -= 1;
	this->Hit_Points += amount;
	std::cout << "ClapTrap " << this->Bot_Name << " has " << this->Hit_Points << " Hit points left!" << std::endl;
	std::cout << "ClapTrap " << this->Bot_Name << " has " << this->Energy_Points << " Energy points left!" << std::endl;
}
