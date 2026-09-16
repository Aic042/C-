/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 13:13:51 by aingunza          #+#    #+#             */
/*   Updated: 2026/09/16 14:21:47 by aingunza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.hpp"

int up_by_2(int value)
{
    return(value * 2);
}

int main( void )
{
    char *str;
    int val[] = {2, 3, 4};
    
    iter(str, 4, up_by_2);
    
    return 0;
}