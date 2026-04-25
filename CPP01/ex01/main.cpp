/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 12:37:41 by aingunza          #+#    #+#             */
/*   Updated: 2026/04/25 13:27:23 by aingunza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Horde.hpp"

int arg_numcheck(char *argv)
{
	int i = 0;
	int result = 0;
	while(argv[i])
	{	
		if(!isdigit(argv[i]))
		{
			std::cout << "Arg has non-digitss" << std::endl;
			return (0);
		}
		i++;
	}
	result = atoi(argv);
	return (result);
}

int main(int argc, char **argv)
{
	int i = 0;
	int horde_num = 0;
	if (argc != 2)
	{
		std::cout << "Faltan argumentos!" << std::endl;
		return (-1);
	}
	if((horde_num = arg_numcheck(argv[1])) == 0)
	{
		std::cout << "Found error in numcheck" << std::endl;
		return(1);
	}
	if(horde_num <= 0)
	{
		std::cout << "Numero de la horda es menor de 0!" << std::endl;
		return(1);
	}
	Zombie* horde = zombieHorde(horde_num, "Z");
	while (i < horde_num)
	{
		horde[i].announce();
		i++;
	}

	delete[] horde;
	return (0);
}
