/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 00:23:26 by root              #+#    #+#             */
/*   Updated: 2026/05/21 00:50:49 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    // El constructor de ClapTrap ya se ejecuto antes de entrar aqui.
    // Solo sobreescribimos los stats con los de ScavTrap.
    this->set_stats(100, 50, 20);
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    // ClapTrap(name) ya puso Bot_Name. Solo cambiamos los stats.
    this->Bot_Name = name;
    this->set_stats(100, 50, 20);
    std::cout << "ScavTrap " << this->Bot_Name << " constructed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
    // Copiamos todo a mano con this-> igual que en ClapTrap
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
        // Llamamos al operator= del padre para copiar sus atributos
        ClapTrap::operator=(other);
        std::cout << "ScavTrap operator= called for " << this->Bot_Name << std::endl;
    }
    return (*this);
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap ha sido Scav-eliminado" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (this->Hit_Points <= 0)
    { std::cout << this->Bot_Name << " is dead!" << std::endl; return ; }
    if (this->Energy_Points <= 0)
    { std::cout << this->Bot_Name << " has no energy!" << std::endl; return ; }
    std::cout << "ScavTrap " << this->Bot_Name << " SCAVENGES " << target
              << ", dealing " << this->Attack_Damage << " damage!" << std::endl;
    this->Energy_Points -= 1;
}


void ScavTrap::guardGate()
{
    std::cout << this->Bot_Name << " is Gate Keeper mode!" << std::endl;
}
