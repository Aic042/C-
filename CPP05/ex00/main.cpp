/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 12:51:12 by root              #+#    #+#             */
/*   Updated: 2026/07/02 12:08:54 by aingunza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	//--------------------Test 1: Invalid Grade------------------------
	std::cout << "Test 1: Grade 151" << std::endl;
	try {
		Bureaucrat Bou("bou", 151);
		std::cout << Bou.getgrade() << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	//--------------------Test 2: Invalid Grade------------------------
	std::cout << "Test 2: Grade 0" << std::endl;
	try {
		Bureaucrat Bou("bou", 0);
		std::cout << Bou.getgrade() << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	//--------------------Test 3: Valid Grade------------------------
	std::cout << "Test 3: Grade 1" << std::endl;
	try {
		Bureaucrat Bou("bou", 1);
		std::cout << Bou.getgrade() << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
}