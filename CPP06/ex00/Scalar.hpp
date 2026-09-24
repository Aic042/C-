/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 13:45:49 by aingunza          #+#    #+#             */
/*   Updated: 2026/09/22 20:44:52 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
# define SCALAR_HPP

# include <iostream>
# include <cctype>
# include <exception>
# include <cmath>     // round
# include <cstdlib>   // exit
# include <sstream>
# include <iostream>
# include <string>

class ScalarConverter
{
    private:    
        // Orthodox Canonical Form
        ScalarConverter();
        ScalarConverter(const ScalarConverter &other);
        ~ScalarConverter();
        ScalarConverter &operator=(const ScalarConverter &other);
    public:
        void static convert(char *str);
};

// ------- String To ... -------
int string_to_integer(std::string str);
double string_to_double(std::string str);
float string_to_float(std::string str);

// ------- Float To ... -------
int float_to_int(float float_paaramater);
double float_to_double(float float_paaramater);
std::string float_to_string(float float_paaramater);

// ------- Parser -------
bool is_arg_a_double(char *str);
bool is_arg_a_float(char *str);
bool is_arg_a_char(char *str);
bool is_arg_a_int(char *str);
void arg_type_check(char *str);
int type_of_arg(char *str);

// ------- Integer To ... -------

std::string integer_to_string(int integer);
float integer_to_float(int integer);
double integer_to_double(int integer);

#endif