/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 13:45:49 by aingunza          #+#    #+#             */
/*   Updated: 2026/09/13 11:38:06 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
# define SCALAR_HPP

# include <iostream>
# include <cctype>
# include <exception>
# include <bits/stdc++.h>
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

int string_to_integer(std::string str);
double string_to_double(std::string str);
float string_to_float(std::string str);
void arg_type_check(char *str);

int float_to_int(float float_paaramater);
double float_to_double(float float_paaramater);

std::string float_to_string(float float_paaramater);
bool is_arg_a_double(char *str);
bool is_arg_a_float(char *str);
int type_of_arg(char *str);

#endif