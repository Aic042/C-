/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 23:19:03 by root              #+#    #+#             */
/*   Updated: 2026/05/20 12:43:57 by aingunza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

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

int main( void )
{
    Fixed a;
    Fixed b(a);
    Fixed c;
    
    // CAMBIAMOS el valor de 'a' usando setRawBits
    a.setRawBits(42);
    
    c = a;
    
    std::cout << "a: " << a.getRawBits() << std::endl;  // 42
    std::cout << "b: " << b.getRawBits() << std::endl;  // 0 (copia del a original)
    std::cout << "c: " << c.getRawBits() << std::endl;  // 0 (asignado desde b)
    
    return 0;
}