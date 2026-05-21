/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 00:23:26 by root              #+#    #+#             */
/*   Updated: 2026/05/21 19:43:30 by aingunza         ###   ########.fr       */
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
    this->Bot_Name      = other.Bot_Name;
    this->Hit_Points    = other.Hit_Points;
    this->Energy_Points = other.Energy_Points;
    this->Attack_Damage = other.Attack_Damage;
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

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap destructor called for " << Bot_Name << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (this->Hit_Points <= 0)
    {
        std::cout << "ScavTrap " << this->Bot_Name << " is dead!" << std::endl;
        return ;
    }
    if (this->Energy_Points <= 0)
    {
        std::cout << "ScavTrap " << this->Bot_Name << " has no energy!" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << this->Bot_Name << " Scavattacks " << target << ", dealing " << this->Attack_Damage << " damage!" << std::endl;
    this->Energy_Points -= 1;
    std::cout << "ScavTrap " << this->Bot_Name << " has " << this->Energy_Points << " energy points left!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << this->Bot_Name << " is Gate Keeper mode!" << std::endl;
}
