/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 10:22:38 by aingunza          #+#    #+#             */
/*   Updated: 2026/04/10 13:33:35 by root             ###   ########.fr       */
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
		Zombie(std::string name){
			zombie_name = name;
		}
		void announce();
	};
	void randoChump();
	Zombie* newZombie( std::string name );
	void randomChump();
	
#endif