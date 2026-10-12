/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 13:45:47 by aingunza          #+#    #+#             */
/*   Updated: 2026/10/13 00:04:49 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Scalar.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Only one argument!!" << std::endl;
        return 1;
    }
    char *str = argv[1];
    ScalarConverter::convert(str);
    return 0;
}

//Static_cast 