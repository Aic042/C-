/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 23:18:52 by root              #+#    #+#             */
/*   Updated: 2026/05/11 11:32:43 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed ()
{
    std::cout << "Default constructor called" << std::endl;
    this->fixed_point_num_value = 0;
}
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->fixed_point_num_value = other.fixed_point_num_value;
    return (*this);
}

Fixed::Fixed(const  Fixed &copied)
{
    std::cout << "Copy constructor called" << std::endl;
    * this = copied;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fixed_point_num_value);
}

void Fixed::setRawBits( int const raw )
{
    this->fixed_point_num_value = raw;
}
