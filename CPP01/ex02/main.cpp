/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 13:15:14 by aingunza          #+#    #+#             */
/*   Updated: 2026/04/25 15:26:23 by aingunza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream> // To use cout
# include <cctype>	// To use toupper()

int main()
{
    std::string variable = "HI THIS IS BRAIN";
    std::string* stringPTR = &variable;
    std::string &stringREF = variable;

    std::cout << &variable << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;
    std::cout << "-------------------" << std::endl;
    std::cout << "El valor de variable es: " << variable << std::endl;
    std::cout << "El valor apuntado por stringPTR es: " << *stringPTR << std::endl;
    std::cout << "El valor apuntado por stringREF es: " << stringREF << std::endl;
    return (0);
}