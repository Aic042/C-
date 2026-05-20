/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 18:15:16 by root              #+#    #+#             */
/*   Updated: 2026/05/21 00:27:19 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP
# define FRAGTRAP
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"


class FragTrap : public ClapTrap
{
	public:
		FragTrap(std::string Fa_name);
		~FragTrap();
		void highFivesGuys(void);
		FragTrap();
		FragTrap(const FragTrap &other);
		FragTrap &operator=(const FragTrap &other);
};

#endif