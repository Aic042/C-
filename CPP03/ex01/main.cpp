/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 19:51:23 by root              #+#    #+#             */
/*   Updated: 2026/05/20 19:51:23 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    // ClapTrap Clanker("Clankah");
    ScavTrap Guard("Boki");
    // Clanker.attack("The guard");
    Guard.guardGate();
    Guard.takeDamage(100);
    // Clanker.takeDamage(50);
    // Clanker.beRepaired(1);
    return (0);
}
