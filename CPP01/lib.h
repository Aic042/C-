/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 10:22:38 by aingunza          #+#    #+#             */
/*   Updated: 2026/02/16 13:37:07 by aingunza         ###   ########.fr       */
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

	Zombie* newZombie( std::string name );
	void randomChump( std::string name );
	void ZombieDestroyer(Zombie);
};

#endif