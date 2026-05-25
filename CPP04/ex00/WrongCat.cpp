/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wrong_WrongCat.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 01:30:13 by root              #+#    #+#             */
/*   Updated: 2026/05/23 09:06:53 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// std::string WrongCat::getType() const
// {
// 	return (this->type);
// }

// void WrongCat::setType(std::string type)
// {
//     this->type = type;
// }


WrongCat::WrongCat() : WrongAnimal()
{
	this->type = "WrongCat";
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	this->type = other.type;
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "Wrong Meow!" << std::endl;  //no deberia ser llamado
}