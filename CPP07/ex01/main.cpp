/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 13:13:51 by aingunza          #+#    #+#             */
/*   Updated: 2026/10/19 17:56:50 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void up_by_2(int &value) //referencia para manipular el valor de manera externa
{
    value = value * 2;
}
void down_by_1(int &value)
{
	value = value - 1;
}

void ascii_displace_by_1(char &value)
{
	value = value + 1;
}
int main( void )
{
	std::cout << "Test int array when up_by_2" << std::endl;
	int int_arr[] = {1, 5, 3};

	iter(int_arr, 3, up_by_2);
	for (int i = 0; i < 3; i++) //multiplicamos por 2
		std::cout << int_arr[i] << std::endl;

	std::cout << "Test int array when down_by_1" << std::endl;
	int int_arr2[] = {10, 100, 1000};

	iter(int_arr2, 3, down_by_1);
	for (int i = 0; i < 3; i++) //todo son nueves ahora
		std::cout << int_arr2[i] << std::endl;
		
	std::cout << "Test char array" << std::endl;
	char char_arr[] = "abc";
	iter(char_arr, 3, ascii_displace_by_1);
	for (int i = 0; i < 3; i++) // pasamos de abc a bcd
		std::cout << char_arr[i] << std::endl;
    return 0;
}