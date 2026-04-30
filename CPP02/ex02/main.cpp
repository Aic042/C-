#include "Fixed.hpp"

std::ostream& operator<<(std::ostream& o, const Fixed& fxam)
{
    o << fxam.toFloat();
    return o;
}

Fixed Fixed::operator+(const Fixed& obj)
{
    Fixed result;
    result = this->toFloat() + obj.toFloat();
    return result;
}

Fixed Fixed::operator-(const Fixed& obj)
{
    Fixed result;
    result = this->toFloat() - obj.toFloat();
    return result;
}
Fixed Fixed::operator*(const Fixed& obj)
{
    Fixed result;
    result = this->toFloat() * obj.toFloat();
    return result;
}

Fixed Fixed::operator/(const Fixed& obj)
{
    Fixed result;
    result = this->toFloat() / obj.toFloat();
    return result;
}

Fixed &Fixed::operator++( void ){
    Fixed result;
    result = this->fixed_point_num_value++;
    return result;
}
Fixed &Fixed::operator--( void ){
    Fixed result;
    result = this->fixed_point_num_value--;
    return result;
}
Fixed Fixed::operator++( int ){
    Fixed result;
    result = this->fixed_point_num_value++;
    return result;
}
Fixed Fixed::operator--( int ){
    Fixed result;
    result = this->fixed_point_num_value--;
    return result;
}

bool Fixed::operator>(const Fixed& obj)
{
    
}

int main( void ) {
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;return 0;
}