/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 12:31:14 by aingunza          #+#    #+#             */
/*   Updated: 2026/04/25 12:31:15 by aingunza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

	Zombie *Zombie1;

	Zombie1 = newZombie("New zombie");
	Zombie1->announce();
	randomChump("Random");
	delete Zombie1;
	return (0);
}


