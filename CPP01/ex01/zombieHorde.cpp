/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 12:37:57 by aingunza          #+#    #+#             */
/*   Updated: 2026/04/25 12:38:01 by aingunza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Horde.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if (N <= 0)
        return NULL;
    int i = 0;
    Zombie* horde = new Zombie[N];
    
    while (i < N)
    {
        horde[i].name_setter(name);
        i++;
    }
    return horde;
}
