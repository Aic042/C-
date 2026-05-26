/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 17:25:39 by aingunza          #+#    #+#             */
/*   Updated: 2026/05/26 11:44:36 by aingunza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <limits>

int main()
{
    std::cout << "Outputing constructor" << std::endl;
    ClapTrap bot("Clapbot");

    std::cout << "Testing takeDamage" << std::endl;
    bot.takeDamage(5);

    std::cout << "\nTesting death" << std::endl;
    bot.takeDamage(5);

    std::cout << "\nTesting actions while dead" << std::endl;
    bot.takeDamage(1);

    std::cout << "\nOutputing destructor" << std::endl;
    return 0;
}