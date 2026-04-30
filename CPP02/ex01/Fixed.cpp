#include "Fixed.hpp"

Fixed::Fixed (){
std::cout << "Default constructor has been called" << std::endl;
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
    std::cout << "Copy constructor has been called" << std::endl;
    this->fixed_point_num_value = copied.fixed_point_num_value;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member fucntion called" << std::endl;
    return (this->fixed_point_num_value);
}

void Fixed::setRawBits( int const raw )
{
    this->fixed_point_num_value = raw;
}
Fixed::Fixed(int const raw)
{
    std::cout << "Int constructor called" << std::endl;
    this->fixed_point_num_value = raw << frational_bits;
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
    return (this->fixed_point_num_value >> frational_bits); 
}