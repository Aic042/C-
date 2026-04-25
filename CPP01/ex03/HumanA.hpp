/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 13:21:29 by aingunza          #+#    #+#             */
/*   Updated: 2026/04/25 15:58:05 by aingunza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
    private: 
        std::string name;
        Weapon &weapon_type;
    public:
        HumanA(std::string name, Weapon &weapon_type);
        void attack();
        ~HumanA();

};