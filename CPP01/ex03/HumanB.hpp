/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 13:21:32 by aingunza          #+#    #+#             */
/*   Updated: 2026/04/25 15:58:05 by aingunza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
    private: 
        std::string name;
        Weapon *weapon_type;
    public:
        HumanB(std::string name);
        void attack();
        ~HumanB();
		void setWeapon(Weapon &obj);
};
