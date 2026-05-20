/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 23:19:15 by root              #+#    #+#             */
/*   Updated: 2026/05/20 13:33:40 by aingunza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void ) {
    Fixed a;
    Fixed const b( 10 );
    Fixed const c( 42.42f );
    Fixed const d( b );
    a = ( 1234.4321f );
    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;
    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;
    return 0;
}
// int main( void )
// {
// 	Fixed a;
// 	Fixed b( a );
// 	Fixed c;
// 	c = b;
	
// 	std::cout << a.getRawBits() << std::endl;
// 	std::cout << b.getRawBits() << std::endl;
// 	std::cout << c.getRawBits() << std::endl;
// 	return 0;
// }

// int main( void )
// {
//     Fixed a;
//     Fixed b(a);
//     Fixed c;
    
//     a.setRawBits(42);
    
//     c = b;
    
//     std::cout << "a: " << a.getRawBits() << std::endl;  // 42
//     std::cout << "b: " << b.getRawBits() << std::endl;  // 0 (copia del a original)
//     std::cout << "c: " << b.getRawBits() << std::endl;  // 0 (asignado desde b)
    
//     return 0;
// }