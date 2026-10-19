/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 12:58:02 by aingunza          #+#    #+#             */
/*   Updated: 2026/10/19 11:35:49 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string> 
#include <cstddef>

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

template <typename T3, typename Function>
void iter(T3 *array, const size_t  length, Function F)
{
    size_t i = 0;
    if(!array)
        return ;
        
    while(i != length)
    {
        F(array[i]);
        i++;        
    }
}

#endif