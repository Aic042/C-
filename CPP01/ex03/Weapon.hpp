/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 13:21:15 by aingunza          #+#    #+#             */
/*   Updated: 2026/04/25 15:58:05 by aingunza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VIOLENCE
# define VIOLENCE

# include <iostream> // To use cout
# include <cctype>	// To use toupper()
#include <stdio.h>   
#include <stdlib.h>     

class Weapon
{
	private:
		std::string objtype;
	public:
		const std::string& getType() const;
		void setType(std::string type);
		Weapon(std::string type);
		~Weapon();
};

#endif 