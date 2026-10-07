/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 13:13:51 by aingunza          #+#    #+#             */
/*   Updated: 2026/10/07 12:00:45 by aingunza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void up_by_2(int &value) //referencia para manipular el valor de manera externa
{
    value = value * 2;
}

int main( void )
{
    // char str[3] = "as";
	std::cout << "Test int array" << std::endl;
	int int_arr[] = {1, 5, 3};

	iter(int_arr, 3, up_by_2);
	for (int i = 0; i < 3; i++)
		std::cout << int_arr[i] << std::endl;
    return 0;
}