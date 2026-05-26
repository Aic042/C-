/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 17:28:42 by aingunza          #+#    #+#             */
/*   Updated: 2026/05/26 11:49:35 by aingunza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap a("FragBot");
    FragTrap b("FragBot2");
    std::cout << std::endl;

    a.attack("wall");
    a.beRepaired(5);
    a.takeDamage(100);
    a.highFivesGuys();
    a.print_stats();
    std::cout << std::endl;
    
    b.takeDamage(50);
    b.highFivesGuys();
    b.print_stats();
    std::cout << std::endl;

    return 0;
}