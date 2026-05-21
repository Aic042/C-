/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 17:28:42 by aingunza          #+#    #+#             */
/*   Updated: 2026/05/21 20:12:34 by aingunza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap a("Alpha");
    FragTrap b(a);

    a.attack("wall");
    a.beRepaired(5);
    a.takeDamage(100);
    a.highFivesGuys();

    b.takeDamage(50);
    b.highFivesGuys();

    return 0;
}