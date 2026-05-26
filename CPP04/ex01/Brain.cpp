/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 01:00:48 by root              #+#    #+#             */
/*   Updated: 2026/05/26 12:52:23 by aingunza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() 
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain &other)
{
	*this = other;
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &other)
{
	int i = 0;
	std::cout << "Brain copy assignment operator called" << std::endl;
	if(this != &other)
	{
		while(i < 100)
		{
			this->ideas[i] = other.ideas[i];
			i++;
		}
	}
	return *this;
}

std::string Brain::getIdea(int index) const
{
	if(index < 0 || index >= 100)
		return "";
	return this->ideas[index];
}

void Brain::setIdea(int index, std::string idea)
{
	if(index < 100 && index >= 0)
		this->ideas[index] = idea;
	else
		std::cout << "Range of ideas is 0-100!" << std::endl;
	return ;
}
