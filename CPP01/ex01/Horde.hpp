/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Horde.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 12:37:46 by aingunza          #+#    #+#             */
/*   Updated: 2026/04/25 12:37:47 by aingunza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HORDE
# define HORDE

# include <stdio.h>
# include <iostream> // To use cout
# include <cctype>	// To use toupper()
#include <stdio.h>   
#include <stdlib.h>     

class Zombie
{
	private:
		std::string zombie_name;
	public:
		int horde_size;
		void announce();
		Zombie();
		~Zombie();
		void name_setter(std::string name);
		std::string name_getter();
		
};
Zombie* zombieHorde( int N, std::string name );
#endif 