/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 12:51:12 by root              #+#    #+#             */
/*   Updated: 2026/08/30 23:56:35 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

// int main()
// {
// 	try {
// 		std::cout << "--------Inicializacion-----------" << std::endl;
// 		Bureaucrat Bou("random Bureaucrat", 50);
// 		AForm Form("random file", 125, 10);
// 		std::cout << "--------------------------------" << std::endl;
// 		std::cout << "Bou's grade: " << Bou.getgrade() << std::endl;
// 		Bou.signAForm(AForm);
// 	}
// 	catch (const std::exception& e) {
// 		std::cerr << e.what() << std::endl;
// 	}
// }

int main()
{
	// --------------------Test 1: Invalid Grade------------------------
	std::cout << "Test 1: Grade 151" << std::endl;
	try {
		Bureaucrat Bou("bou", 151);
		std::cout << Bou.getgrade() << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	// --------------------Test 2: Invalid Grade------------------------
	std::cout << "Test 2: Grade 0" << std::endl;
	try {
		Bureaucrat Bou("bou", 0);
		std::cout << Bou.getgrade() << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	// --------------------Test 3: Valid Grade------------------------
	std::cout << "Test 3: Grade 1" << std::endl;
	try {
		Bureaucrat Bou("bou", 1);
		std::cout << Bou.getgrade() << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	// --------------------Test 4: Execution------------------------
	// --------------------Test 4: Execution------------------------
	std::cout << "--------------------------------" << std::endl;
	try
	{
			Bureaucrat highGrade("Jim", 1);
			ShrubberryCreationForm shrub("garden");

			highGrade.signAForm(shrub);
			highGrade.executeAForm(shrub);
	}
	catch (const std::exception &e)
	{
			std::cerr << e.what() << std::endl;
	}

	try
	{
			Bureaucrat lowGrade("Bob", 150);
			RobotomyRequestForm robot("Bender");

			lowGrade.signAForm(robot);   // esto debería fallar: 150 no alcanza el 72 requerido
			lowGrade.executeAForm(robot);
	}
	catch (const std::exception &e)
	{
			std::cerr << e.what() << std::endl;
	}
}