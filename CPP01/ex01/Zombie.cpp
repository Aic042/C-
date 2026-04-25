/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 12:37:54 by aingunza          #+#    #+#             */
/*   Updated: 2026/04/25 12:37:55 by aingunza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Horde.hpp"

Zombie::Zombie(){  //Constructor
    std::cout << " Un zombie mas Ha sido creado\n";
}
Zombie::~Zombie(){  //Desstructor
    std::cout << " Un zombie mas ha sido destruido\n";
}

void Zombie::name_setter(std::string name){
    this->zombie_name = name;
}
std::string Zombie::name_getter(){
    return (this->zombie_name);
}

void Zombie::announce()
{
    std::cout << this->zombie_name << ": BraiiiiiiinnnzzzZ\n";
}
