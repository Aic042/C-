/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 23:19:03 by root              #+#    #+#             */
/*   Updated: 2026/05/11 00:14:58 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// int main( void )
// {
//     std::cout << "=== CREANDO a ===" << std::endl;
//     Fixed a;
//     a.setRawBits(100);
    
//     std::cout << "\n=== COPIANDO a hacia b ===" << std::endl;
//     Fixed b(a);
    
//     std::cout << "\n=== CREANDO c vacía ===" << std::endl;
//     Fixed c;
    
//     std::cout << "\n=== ASIGNANDO b hacia c ===" << std::endl;
//     c = b;
    
//     std::cout << "\n=== VALORES FINALES ===" << std::endl;
//     std::cout << "a: " << a.getRawBits() << std::endl;
//     std::cout << "b: " << b.getRawBits() << std::endl;  
//     std::cout << "c: " << c.getRawBits() << std::endl;
    
//     std::cout << "\n=== CAMBIANDO a para PROBAR independencia ===" << std::endl;
//     a.setRawBits(999);
    
//     std::cout << "\n=== DESPUÉS del cambio de a ===" << std::endl;
//     std::cout << "a: " << a.getRawBits() << std::endl;
//     std::cout << "b: " << b.getRawBits() << std::endl;  // ¡Sigue siendo 100!
//     std::cout << "c: " << c.getRawBits() << std::endl;  // ¡Sigue siendo 100!
    
//     return 0;
// }
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