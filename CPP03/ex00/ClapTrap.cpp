/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 00:12:57 by root              #+#    #+#             */
/*   Updated: 2026/05/25 18:13:45 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//el por defecto sin nombre
ClapTrap::ClapTrap()
{
    this->Bot_Name = "default ClapTrap";
    this->set_stats(10, 10, 0);
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    this->Bot_Name = name;
    this->set_stats(10, 10, 0);
    std::cout << "ClapTrap " << this->Bot_Name << " constructed" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &other)
{
    Bot_Name      = other.Bot_Name;
    Hit_Points    = other.Hit_Points;
    Energy_Points = other.Energy_Points;
    Attack_Damage = other.Attack_Damage;
    std::cout << "ClapTrap copy constructor called for " << Bot_Name << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		Bot_Name      = other.Bot_Name;
		Hit_Points    = other.Hit_Points;
		Energy_Points = other.Energy_Points;
		Attack_Damage = other.Attack_Damage;
		std::cout << "ClapTrap operator= called for " << Bot_Name << std::endl;
	}
	return (*this);
}

void ClapTrap::set_stats(unsigned int Hit_Points, unsigned int eng_points, unsigned int attack_dmg) 
{
    this->Hit_Points    = Hit_Points;
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
	if(amount >= this->Hit_Points)
		this->Hit_Points = 0;	
	else
		Hit_Points -= amount;
	std::cout << "ClapTrap " << this->Bot_Name << " has been attacked " << " causing " << amount << " points of health lost!" << std::endl;
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

void ClapTrap::print_stats() const
{
	std::cout << "ClapTrap " << this->Bot_Name << " has " << this->Hit_Points << " Hit points, " << this->Energy_Points << " Energy points and " << this->Attack_Damage << " Attack damage!" << std::endl;
}