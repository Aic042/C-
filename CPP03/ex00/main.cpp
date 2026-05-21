/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 17:25:39 by aingunza          #+#    #+#             */
/*   Updated: 2026/05/21 17:26:35 by aingunza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <limits>

int main()
{
    ClapTrap bot("ClapBot");

    bot.takeDamage(2);
    bot.attack("No one!");
    bot.beRepaired(2);
    return (0);
}