/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 23:19:10 by root              #+#    #+#             */
/*   Updated: 2026/05/21 09:42:13 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed (){
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
    *this = copied;
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
Fixed::Fixed(int const raw)
{
    std::cout << "Int constructor called" << std::endl;
    this->fixed_point_num_value = raw << fractional_bits;
}

Fixed::Fixed(float const raw)
{
    std::cout << "Float constructor called" << std::endl;
    this->fixed_point_num_value = roundf(raw * 256);
}

float Fixed::toFloat( void ) const
{
    return ((float)this->fixed_point_num_value / 256);
}

int Fixed::toInt( void ) const
{
    return (this->fixed_point_num_value >> fractional_bits); 
}

std::ostream& operator<<(std::ostream& o, const Fixed& fxam)
{
    o << fxam.toFloat();
    return o;
}
    