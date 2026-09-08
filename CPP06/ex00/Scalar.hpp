/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aingunza <aingunza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 13:45:49 by aingunza          #+#    #+#             */
/*   Updated: 2026/09/08 17:02:23 by aingunza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
# define SCALAR_HPP

# include <iostream>
# include <cctype>
# include <exception>
# include <bits/stdc++.h>
#include <sstream>
#include <iostream>
#include <string>

class ScalarConverter
{
    void static convert(char *str);
};

int string_to_integer(std::string str);
double string_to_double(std::string str);
float string_to_float(std::string str);

std::string float_to_string(float float_paaramater);
int float_to_int(float float_paaramater);
double float_to_double(float float_paaramater);

#endif