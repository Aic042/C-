/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 12:58:02 by aingunza          #+#    #+#             */
/*   Updated: 2026/09/14 13:33:45 by aingunza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SWAP_HPP
# define SWAP_HPP

# include <iostream>
# include <string> 

template <typename T>
void swap(T &a, T &b)
{
    T swapper;
    swapper = a;
    a = b;
    b = swapper;
}
template <typename T1>
T1 max(T1 a, T1 b)
{
    if(a > b)
        return a;
    else
        return b;
}

template <typename T2>
T2 min(T2 a, T2 b)
{
    if(a < b)
        return a;
    else
        return b;
}


#endif