#include "Fixed.hpp"

Fixed::Fixed(Fixed &copied)
{
    std::cout << "Copy constructor has been called" << std::endl;
    copied.fixed_point_num_value = 0;
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
