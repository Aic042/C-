/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 12:51:12 by root              #+#    #+#             */
/*   Updated: 2026/10/20 00:04:31 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	//--------------------Test 1: Invalid Grade------------------------
	std::cout << "Test 1: Grade 151" << std::endl;
	try {
		Bureaucrat Bou("bou", 151);
		std::cout << Bou.getGrade() << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	//--------------------Test 2: Invalid Grade------------------------
	std::cout << "Test 2: Grade 0" << std::endl;
	try {
		Bureaucrat Bou("bou", 0);
		std::cout << Bou.getGrade() << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	//--------------------Test 3: Valid Grade------------------------
	std::cout << "Test 3: Grade 1" << std::endl;
	try {
		Bureaucrat Bou("bou", 1);
		std::cout << Bou.getGrade() << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	//--------------------Test 4: Usege of operator = ------------------------
	std::cout << "Test 4: Operator =" << std::endl;
	try {
		Bureaucrat Bou("Bou", 14);
		Bureaucrat Dou("Dou", 42);
		Bou = Dou;
		std::cout << "Bou grade is " << Bou.getGrade() << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

		//--------------------Test 4: Usege of operator = ------------------------
	std::cout << "Test 5: Operator <<" << std::endl;
	try {
		Bureaucrat Bou("Bou", 14);
		std::cout << Bou << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	// test del increment y limite de Bureaucrat
	try
	{
		Bureaucrat Bou("Bou", 2);
		std::cout << Bou.getName() << " has grade: " << Bou.getGrade() << std::endl;
		Bou.incrementGrade(); // should succeed
		std::cout << Bou.getName() << " has grade: " << Bou.getGrade() << std::endl;
		Bou.incrementGrade(); // should throw exception
	}
	catch (const std::exception &e)
	{
			std::cerr << e.what() << std::endl;
	}

}