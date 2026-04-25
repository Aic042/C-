/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 10:22:38 by aingunza          #+#    #+#             */
/*   Updated: 2026/04/25 01:08:25 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAINZ
# define BRAINZ

# include <iostream> // To use cout
# include <cctype>	// To use toupper()

class Zombie{
	private:
		std::string zombie_name;
	public:
		Zombie(std::string name);
		~Zombie();  //Destructor
		void announce();
	};
Zombie* newZombie( std::string name );
void randomChump(std::string name);
	
#endif