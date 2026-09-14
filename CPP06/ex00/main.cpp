/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 13:45:47 by aingunza          #+#    #+#             */
/*   Updated: 2026/09/13 10:13:32 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"   



int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        std::cout << "Only one argument!!" << std::endl;
        return(-1);
    }   
    char* str = argv[1];
    // double = str;
    // char    converted_char;
    int     converted_int;
    double  converted_double;
    float   converted_float;
    
    // converted_char = static_cast<char>(str);
    // converted_int = (int)(str);
    // converted_double = static_cast<double>(str);
    // converted_float = static_cast<float>(str);

    // converted_char = static_cast<char>(str);
    converted_int = string_to_integer(str);
    converted_double = string_to_double(str);
    converted_float = string_to_float(str);
    
    if(type_of_arg(str) == 2)
    {
        //double type
    }
    else if(type_of_arg(str) == 1)
    {
        //is a float type
    }
    else if(type_of_arg(str) == 0)
    {
        //is an int type
    }

    std::cout << "Raw argument is :" << argv[1] << std::endl;
    // std::cout << "Char is :" << converted_char << std::endl;
    std::cout << "bool is :" << converted_int << std::endl;
    std::cout << "Double is :" << converted_double << std::endl;
    std::cout << "Float is :" << converted_float << std::endl;
}

//Static_cast 