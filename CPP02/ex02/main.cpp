/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 23:19:27 by root              #+#    #+#             */
/*   Updated: 2026/05/21 17:05:26 by aingunza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <iostream>
int main( void ) {
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    
    std::cout << "Inital value of a is " << a << std::endl;
    std::cout << "Pre-increase step: " << ++a << std::endl;
    std::cout << "Value of a after pre-increase is " << a << std::endl;
    std::cout << "Post-increase step: " << a++ << std::endl;
    std::cout << "Value of a after post-increase is " << a << std::endl;
    std::cout << "Value of a after post-increase takes effect is "  << a << std::endl;
    
    std::cout << "\nValue of b is: " << b << std::endl;
    std::cout << std::endl;
    std::cout << "Value of a is : " << a << std::endl;
    a.setRawBits(0);
    std::cout << "New Value of a is : " << a << std::endl;
    std::cout << "The biggest value found between Fixed a and Fixed b is: " << Fixed::max( a, b ) << std::endl;
    return 0;
}