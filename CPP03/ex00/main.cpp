/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 17:25:39 by aingunza          #+#    #+#             */
/*   Updated: 2026/05/25 18:19:47 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <limits>

int main()
{
    ClapTrap bot("Bender");

    std::cout << "\n=== TEST 1: daño normal ===" << std::endl;
    bot.takeDamage(5);

    std::cout << "\n=== TEST 2: daño exacto ===" << std::endl;
    bot.takeDamage(5);

    std::cout << "\n=== TEST 3: daño estando muerto ===" << std::endl;
    bot.takeDamage(1);

    std::cout << "\n=== TEST 4: daño gigante unsigned int ===" << std::endl;
    bot.takeDamage(std::numeric_limits<unsigned int>::max());

    return 0;
}