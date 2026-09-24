/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 13:45:59 by aingunza          #+#    #+#             */
/*   Updated: 2026/09/23 12:14:06 by root             ###   ########.fr       */
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

void static convert(char *str)
{
	
}
