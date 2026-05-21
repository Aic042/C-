/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 23:19:22 by root              #+#    #+#             */
/*   Updated: 2026/05/21 12:56:12 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed (){
    // std::cout << "Default constructor has been called" << std::endl;
    this->fixed_point_num_value = 0;
}
Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& obj)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    if (this != &obj)
        this->fixed_point_num_value = obj.fixed_point_num_value;
    return (*this);
}

Fixed::Fixed(const  Fixed &copied)
{
    // std::cout << "Copy constructor has been called" << std::endl;
    *this = copied;
}

int Fixed::getRawBits( void ) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return (this->fixed_point_num_value);
}

void Fixed::setRawBits( int const raw )
{
    this->fixed_point_num_value = raw;
}
Fixed::Fixed(int const raw)
{
    // std::cout << "Int constructor called" << std::endl;
    this->fixed_point_num_value = raw << fractional_bits;
}

Fixed::Fixed(float const raw)
{
    // std::cout << "Float constructor called" << std::endl;
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

Fixed Fixed::operator+(const Fixed& obj) const
{
    Fixed result;
    result = this->toFloat() + obj.toFloat();
    return result;
}

Fixed Fixed::operator-(const Fixed& obj) const
{
    Fixed result;
    result = this->toFloat() - obj.toFloat();
    return result;
}
Fixed Fixed::operator*(const Fixed& obj) const
{
    Fixed result;
    result = this->toFloat() * obj.toFloat();
    return result;
}

Fixed Fixed::operator/(const Fixed& obj) const
{
    Fixed result;
    result = this->toFloat() / obj.toFloat();
    return result;
}

Fixed &Fixed::operator++( void )
{
    this->fixed_point_num_value++;
    return (*this);
}
Fixed &Fixed::operator--( void )
{
    this->fixed_point_num_value--;
    return (*this);
}

Fixed Fixed::operator++( int )
{
    Fixed result = *this;
    this->fixed_point_num_value++;
    return result;
}
Fixed Fixed::operator--( int ){
    Fixed result = *this;
    this->fixed_point_num_value--;
    return result;
}

bool Fixed::operator>(const Fixed& obj) const
{
    return (this->fixed_point_num_value > obj.fixed_point_num_value);
}
bool Fixed::operator<(const Fixed& obj) const
{
    return (this->fixed_point_num_value < obj.fixed_point_num_value);
}
bool Fixed::operator>=(const Fixed& obj) const
{
    return (this->fixed_point_num_value >= obj.fixed_point_num_value);
}
bool Fixed::operator<=(const Fixed& obj) const
{
    return (this->fixed_point_num_value <= obj.fixed_point_num_value);
}
bool Fixed::operator==(const Fixed& obj) const
{
    return (this->fixed_point_num_value == obj.fixed_point_num_value);
}
bool Fixed::operator!=(const Fixed& obj) const
{
    return (this->fixed_point_num_value != obj.fixed_point_num_value);
}

const Fixed &Fixed::min( Fixed const &obj1, Fixed const &obj2 )
{
    if (obj1 < obj2)
        return obj1;
    else
        return obj2;
}

const Fixed &Fixed::max( Fixed const &obj1, Fixed const &obj2 )
{
    if (obj1 > obj2)
        return obj1;
    else
        return obj2;
}

Fixed &Fixed::min( Fixed &obj1, Fixed &obj2 )
{
    if (obj1 < obj2)
        return obj1;
    else
        return obj2;
}

Fixed &Fixed::max( Fixed &obj1, Fixed &obj2 )
{
    if (obj1 > obj2)
        return obj1;
    else
        return obj2;
}
