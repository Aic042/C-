/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 12:51:12 by root              #+#    #+#             */
/*   Updated: 2026/07/01 13:00:09 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try {
		Bureaucrat Bou("random", 152);
		Form form("random", 1, 155);
		// form.checkerSign();
		std::cout << "Bou's grade: " << Bou.getgrade() << std::endl;
		Bou.signForm(&form);
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
}