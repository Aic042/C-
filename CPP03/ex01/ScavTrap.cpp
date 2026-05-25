/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 00:23:26 by root              #+#    #+#             */
/*   Updated: 2026/05/25 19:59:00 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    this->set_stats(100, 50, 20);
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->set_stats(100, 50, 20);
    std::cout << "ScavTrap " << this->Bot_Name << " constructed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
    std::cout << "ScavTrap copy constructor called for " << this->Bot_Name << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
        std::cout << "ScavTrap operator= called for " << this->Bot_Name << std::endl;
    }
    return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called for " << Bot_Name << std::endl;
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

void ScavTrap::guardGate()
{
    std::cout << this->Bot_Name << " is Gate Keeper mode!" << std::endl;
}
