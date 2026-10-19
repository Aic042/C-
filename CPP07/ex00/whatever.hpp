/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 12:58:02 by aingunza          #+#    #+#             */
/*   Updated: 2026/10/19 11:36:01 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <cstddef>
# include <iostream>
# include <string> 

template <typename T>
void swap(T &a, T &b)
{
    T swapper = a;
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
