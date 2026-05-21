/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 23:19:03 by root              #+#    #+#             */
/*   Updated: 2026/05/21 17:09:42 by aingunza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
    Fixed a;
    Fixed b( a );
    Fixed c;
    c = b;
    
    std::cout << "Fixed a, constructed via default has a value of: || " << a.getRawBits() << std::endl;
    std::cout << "Fixed b, constructed via copy of 'a' has a value of: || " << b.getRawBits() << std::endl;
    std::cout << "Fixed c, which's value was altered via operator '=' copying 'b' has a value of: || " << c.getRawBits() << std::endl;
    return 0;
}
