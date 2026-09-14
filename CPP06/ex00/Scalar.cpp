/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 13:45:59 by aingunza          #+#    #+#             */
/*   Updated: 2026/09/13 12:36:46 by root             ###   ########.fr       */
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

	integer = std::stoi(str);
	return(integer);
}

double string_to_double(std::string str)
{
	double double_value;

	double_value = std::stod(str);
	return(double_value);
}

float string_to_float(std::string str)
{
	float float_value;

	float_value = std::stof(str);
	return(float_value);
}


// ------------------- FLOAT -------------------

std::string float_to_string(float float_paaramater)
{
	std::string string;
	std::stringstream ss;
	// string = std::to_string(float_paaramater);
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


