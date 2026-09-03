/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 12:51:12 by root              #+#    #+#             */
/*   Updated: 2026/09/02 18:45:30 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try {
		std::cout << "--------Inicializacion-----------" << std::endl;
		Bureaucrat Bou("random Bureaucrat", 50);
		Form form("random file", 125, 120);
		std::cout << "--------------------------------" << std::endl;
		std::cout << "Bou's grade: " << Bou.getgrade() << std::endl;
		Bou.signForm(form);
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	//--------------------Test 2: Usage of operator = ------------------------
	std::cout << "Test 2: Operator =" << std::endl;
	try {
		Bureaucrat Bou("Bou", 14);
		Bureaucrat Dou("Dou", 42);
		Bou = Dou;
		std::cout << "Bou grade is " << Bou.getgrade() << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "Test 3: Operator <<" << std::endl;
	try {
		Bureaucrat Bou("Bou", 14);
		std::cout << Bou << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "Test 4: SignForm" << std::endl;
	try
	{
		Bureaucrat MrSigner("Signer", 32);
		Form SuperImportantDocument("Form", 14, 12);
		MrSigner.signForm(SuperImportantDocument);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
