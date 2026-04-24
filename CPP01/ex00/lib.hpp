/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 10:22:38 by aingunza          #+#    #+#             */
/*   Updated: 2026/04/22 10:23:20 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAINZ
# define BRAINZ

# include <stdio.h>
# include <iostream> // To use cout
# include <cctype>	// To use toupper()
# include <stdio.h>

class Zombie{
	private:
		std::string zombie_name;
	public:
		Zombie(std::string name){  //Constructor
			zombie_name = name;
			std::cout << zombie_name << " Ha sido creado\n";
		}
		~Zombie(){  //Desstructor
			std::cout << zombie_name << " ha sido destruido\n";
		}
		void announce();
	};
Zombie* newZombie( std::string name );
void randomChump(std::string name);
	
#endif