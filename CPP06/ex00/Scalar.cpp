/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 13:45:59 by aingunza          #+#    #+#             */
/*   Updated: 2026/10/01 18:24:24 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

// void ScalarConverter::convert(char *str)
// {
//     std::cout << static_cast<int>(str);
// }

// Orthodox Canonical Form

ScalarConverter::ScalarConverter()
{
	std::cout << "ScalarConverter default constructor called" << std::endl;
}
ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
	*this = other;
	std::cout << "ScalarConverter copy constructor called" << std::endl;
}
ScalarConverter::~ScalarConverter()
{
	std::cout << "ScalarConverter destructor called" << std::endl;
}
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
	(void)other;
	// if (this != &other)
	// {
	// 	this = other;
	// }
	return (*this);
}

double set_double(std::string &str)
{
	std::stringstream ss(str);
	double d;
	ss >> d;
	return (d);
}

// ------------------- STRING -------------------

int string_to_integer(std::string str)
{
	int integer;
	std::stringstream ss(str);
	ss >> integer;

	// integer = std::stoi(str);
	return(integer);
}

double string_to_double(std::string str)
{
	double double_value;
	std::stringstream ss(str);
	ss >> double_value;

	return(double_value);
	// double double_value;

	// double_value = std::stod(str);
	// return(double_value);

}

float string_to_float(std::string str)
{
	float float_value;
	std::stringstream ss(str);
	ss >> float_value;

	return(float_value);

// 	float float_value;

// 	float_value = std::stof(str);
// 	return(float_value);
}

// ------------------- FLOAT -------------------

std::string float_to_string(float float_paaramater)
{
	std::string string;
	std::stringstream ss;
	ss << float_paaramater;
	string = ss.str();
	return (string);
}

int float_to_int(float float_paaramater)
{
	int result;
	result = static_cast<int>(round(float_paaramater));
	return (result);
}

double float_to_double(float float_paaramater)
{
	double double_parameter;
	double_parameter = static_cast<double>(float_paaramater);
	return (double_parameter);
}

// ------- Integer To ... -------

std::string integer_to_string(int integer)
{
    std::string str;
    std::stringstream ss;
    ss << integer;
    ss>>str;
	return (str);
}

float integer_to_float(int integer)
{
	float float_value;
	float_value = (float)integer;
	return (float_value);
}

double integer_to_double(int integer)
{
	double double_value;
	double_value = integer;
	return(double_value);
}

void ScalarConverter::convert(char *str)
{
	int type = type_of_arg(str);
	
    if (type == 3)          // ---------- PSEUDO-LITERAL ----------
    {
        std::string s(str);
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        if (s == "nan")
            std::cout << "float: nanf" << std::endl << "double: nan" << std::endl;
        else if (s == "nanf")
            std::cout << "float: nanf" << std::endl << "double: nan" << std::endl;
        else if (s == "inf" || s == "+inf")
            std::cout << "float: inff" << std::endl << "double: inf" << std::endl;
        else if (s == "-inf")
            std::cout << "float: -inff" << std::endl << "double: -inf" << std::endl;
        else if (s == "inff" || s == "+inff")
            std::cout << "float: inff" << std::endl << "double: inf" << std::endl;
        else // "-inff"
            std::cout << "float: -inff" << std::endl << "double: -inf" << std::endl;
    }
    else if (type == 4)     // ---------- CHAR ----------
    {
        char c = str[0];
        std::cout << "char: '" << c << "'" << std::endl;
        std::cout << "int: " << static_cast<int>(c) << std::endl;
        std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
    }
    else if (type == 1)     // ---------- FLOAT ----------
    {
        std::string s(str);
        s = s.substr(0, s.size() - 1);       // quitamos la 'f' final: "42.0f" -> "42.0"
        float f = string_to_float(s);

        if (f < 0 || f > 255)
            std::cout << "char: impossible" << std::endl;
        else if (!std::isprint(static_cast<int>(f)))
            std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;

        std::cout << "int: " << float_to_int(f) << std::endl;
        std::cout << "float: " << f << "f" << std::endl;
        std::cout << "double: " << float_to_double(f) << std::endl;
    }
    else if (type == 2)     // ---------- DOUBLE ----------
    {
        double d = string_to_double(str);

        if (d < 0 || d > 255)
            std::cout << "char: impossible" << std::endl;
        else if (!std::isprint(static_cast<int>(d)))
            std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;

        std::cout << "int: " << static_cast<int>(d) << std::endl;
        std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
        std::cout << "double: " << integer_to_double(d) << ".0" << std::endl;    }
    else                     // ---------- INT ----------
    {
        int i = string_to_integer(str);

        if (i < 0 || i > 255)
            std::cout << "char: impossible" << std::endl;
        else if (!std::isprint(i))
            std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;

        std::cout << "int: " << i << std::endl;
        std::cout << "float: " << integer_to_float(i) << ".0f" << std::endl;
        std::cout << "double: " << integer_to_double(i) << ".0" << std::endl;
    }
}
