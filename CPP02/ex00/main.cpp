/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 23:19:03 by root              #+#    #+#             */
/*   Updated: 2026/05/18 22:00:55 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed b( a );
	Fixed c;
	c = b;
	
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}

// int main( void )
// {
//     Fixed a;
//     Fixed b(a);
//     Fixed c;
    
//     // CAMBIAMOS el valor de 'a' usando setRawBits
//     a.setRawBits(42);
    
//     c = b;
    
//     std::cout << "a: " << a.getRawBits() << std::endl;  // 42
//     std::cout << "b: " << b.getRawBits() << std::endl;  // 0 (copia del a original)
//     std::cout << "c: " << b.getRawBits() << std::endl;  // 0 (asignado desde b)
    
//     return 0;
// }