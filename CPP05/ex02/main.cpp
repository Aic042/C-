/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 12:51:12 by root              #+#    #+#             */
/*   Updated: 2026/08/07 00:26:41 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	// try {
	// 	std::cout << "--------Inicializacion-----------" << std::endl;
	// 	Bureaucrat Bou("random Bureaucrat", 50);
	// 	Form form("random file", 125, 10);
	// 	std::cout << "--------------------------------" << std::endl;
	// 	std::cout << "Bou's grade: " << Bou.getgrade() << std::endl;
	// 	Bou.signForm(form);
	// }
	// catch (const std::exception& e) {
	// 	std::cerr << e.what() << std::endl;
	// }
}

// int main()
// {
// 	--------------------Test 1: Invalid Grade------------------------
// 	std::cout << "Test 1: Grade 151" << std::endl;
// 	try {
// 		Bureaucrat Bou("bou", 151);
// 		std::cout << Bou.getgrade() << std::endl;
// 	}
// 	catch (const std::exception& e) {
// 		std::cerr << e.what() << std::endl;
// 	}
// 	--------------------Test 2: Invalid Grade------------------------
// 	std::cout << "Test 2: Grade 0" << std::endl;
// 	try {
// 		Bureaucrat Bou("bou", 0);
// 		std::cout << Bou.getgrade() << std::endl;
// 	}
// 	catch (const std::exception& e) {
// 		std::cerr << e.what() << std::endl;
// 	}
// 	--------------------Test 3: Valid Grade------------------------
// 	std::cout << "Test 3: Grade 1" << std::endl;
// 	try {
// 		Bureaucrat Bou("bou", 1);
// 		std::cout << Bou.getgrade() << std::endl;
// 	}
// 	catch (const std::exception& e) {
// 		std::cerr << e.what() << std::endl;
// 	}
// }