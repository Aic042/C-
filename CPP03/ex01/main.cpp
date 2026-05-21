/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 19:51:23 by root              #+#    #+#             */
/*   Updated: 2026/05/21 18:59:11 by aingunza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ClapTrap Clap_Bot("Clap_Bot");
    ScavTrap Guard("Guard");
    Clap_Bot.attack("The Guard");
    Guard.guardGate();
    Guard.takeDamage(99);
    Clap_Bot.takeDamage(8);
    Clap_Bot.beRepaired(1);
    std::cout << std::endl;
    return (0);
}
