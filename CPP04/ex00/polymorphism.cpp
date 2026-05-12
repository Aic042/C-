/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   polymorphism.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 19:04:48 by aingunza          #+#    #+#             */
/*   Updated: 2026/05/12 19:09:07 by aingunza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "polymorphism.hpp"


std::string Animal::getType() 
{
	return (this->type);
}

void Animal::setType(std::string type)
{
    this->type = type;
}
