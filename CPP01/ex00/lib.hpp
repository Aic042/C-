/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 10:22:38 by aingunza          #+#    #+#             */
/*   Updated: 2026/04/05 10:32:07 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAINZ
# define BRAINZ

# include <stdio.h>
# include <iostream> // To use cout
# include <cctype>	// To use toupper()
# include <stdio.h>

class Zombie{
	public:
		std::string zombie_name;

		void ZombieDestroyer(Zombie);
		void randoChump();
	};
	Zombie* newZombie( std::string name );
	void randomChump( std::string name );
	
#endif