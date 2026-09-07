/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 13:45:59 by aingunza          #+#    #+#             */
/*   Updated: 2026/09/05 14:01:23 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

// void ScalarConverter::convert(char *str)
// {
//     std::cout << static_cast<int>(str);
// }

double set_double(std::string &str)
{
	std::stringstream ss(str);
	double d;
	ss >> d;
	return (d);
}