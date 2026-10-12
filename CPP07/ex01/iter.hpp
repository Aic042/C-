/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 12:58:02 by aingunza          #+#    #+#             */
/*   Updated: 2026/09/24 11:26:04 by aingunza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

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

template <typename T3, typename Function>
void iter(T3 *array, size_t  length, Function F)
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