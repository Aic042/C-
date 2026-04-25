/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Humanss.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 13:21:35 by aingunza          #+#    #+#             */
/*   Updated: 2026/04/25 15:58:05 by aingunza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name)
    : name(name), weapon_type(NULL)
{}
HumanB::~HumanB(){
	std::cout << this->name << " Has been destroyed" << std::endl;
};
HumanA::HumanA(std::string name, Weapon &weapon_type)
    : name(name), weapon_type(weapon_type)
{}
HumanA::~HumanA(){
	std::cout << this->name << " Has been destroyed" << std::endl;
};

void HumanA::attack(){ 
		std::cout << this->name << " attacks with their " << this->weapon_type.getType() << std::endl;

}

void HumanB::setWeapon(Weapon &obj){
	this->weapon_type = &obj;
}
void HumanB::attack(){
	if(!this->weapon_type)
		std::cout << this->name << " attacks with nothing" << std::endl;
	else
		std::cout << this->name << " attacks with their " << this->weapon_type->getType() << std::endl;
};
