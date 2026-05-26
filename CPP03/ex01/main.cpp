/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 19:51:23 by root              #+#    #+#             */
/*   Updated: 2026/05/26 11:37:30 by aingunza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    std::cout << "Constructing Scavtrap. Should output Clap and then Scav" << std::endl;
    ScavTrap guard("Guard");
    
    std::cout << "\nTesting Scav's actions" << std::endl;
    std::cout << "Guard's inital stats are: ";
    guard.print_stats();
    guard.guardGate();
    guard.attack("Enemy");
    guard.takeDamage(30);
    guard.beRepaired(20);
    guard.print_stats();

    std::cout << "\nWrapping things up, destructors should be call Scaptrap first and then Clap's" << std::endl;
    return 0;
}
