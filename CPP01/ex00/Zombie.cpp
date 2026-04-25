/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 12:30:57 by aingunza          #+#    #+#             */
/*   Updated: 2026/04/25 15:18:59 by aingunza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce()
{
    std::cout << this->zombie_name << ": BraiiiiiiinnnzzzZ\n";
}
Zombie::Zombie(std::string name){  //Constructor
    zombie_name = name;
    std::cout << zombie_name << " Ha sido creado\n";
}
Zombie::~Zombie(){  //Destructor
    std::cout << zombie_name << " ha sido destruido\n";
}