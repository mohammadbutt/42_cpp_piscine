/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 20:04:38 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/20 22:49:50 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion(void)
{
//	std::cout << "Calling default constructor" << std::endl;
}
/*
** Reference: www.cplusplus.com/reference/string/stod/
** stod   - string to double
** stof   - string to float
** stoi   - string to integer
** stold  - string to Long Double
** stoll  - string to Long Long
** stoull - string to unsigned long long
*/

Conversion::Conversion(std::string userString)
{
	try
	{
		_userNumber = std::stod(userString);
	}
	catch(std::exception &e)
	{
		std::cout << "Conversion not possible: "  << e.what()<< std::endl;
		return;
	}
	convertToChar();
	convertToInteger();
	convertToFloat();
	convertToDouble();
}

Conversion::Conversion(const Conversion &srcCopy)
{
	*this = srcCopy;
}

Conversion &Conversion::operator = (const Conversion &rhs)
{
	if(this != &rhs)
		*this = rhs;
	return(*this);
}

/*
** Reference: www.cplusplus.com/reference/cmath/isnan/
*/

void Conversion::convertToChar(void)
{
	char charAscii = 0;
	charAscii = static_cast<char>(_userNumber);
	
	std::cout << "char: ";
	if(std::isnan(_userNumber))
		std::cout << "Impossible" << std::endl;
	else if(isprint(charAscii) == false )
		std::cout << "Non Displayable" << std::endl;
	else
		std::cout << "'" << charAscii << "'" << std::endl; 
}

void Conversion::convertToInteger(void)
{
	int integer = 0;
	integer = static_cast<int>(_userNumber);

	std::cout << "int: ";
	if(std::isnan(_userNumber) || std::isinf(_userNumber))
		std::cout << "Impossible" << std::endl;
	else
		std::cout << integer << std::endl;
}

void Conversion::convertToFloat(void)
{
	float floatNumber = 0;
	floatNumber = static_cast<float>(_userNumber);

	std::cout << "float: ";
	if(std::isinf(_userNumber))
		std::cout << static_cast<float>(_userNumber) << std::endl;
	else if(std::isnan(_userNumber))
		std::cout << "nanf" << std::endl;
	else if(floor(floatNumber) == _userNumber)
		std::cout << floatNumber << ".0f" << std::endl;
	else
		std::cout << floatNumber << "f" << std::endl;
}

void Conversion::convertToDouble(void)
{
	double doubleNumber = 0;
	doubleNumber = static_cast<double>(_userNumber);

	std::cout << "double: ";
	if(std::isinf(_userNumber))
		std::cout << static_cast<double>(_userNumber) << std::endl;
	else if(std::isnan(_userNumber))
		std::cout << "nan" << std::endl;
	else if(floor(doubleNumber) == _userNumber)
		std::cout << doubleNumber << ".0" << std::endl;
	else
		std::cout << doubleNumber << std::endl;
}

void Conversion::ftExit(void)
{
	std::cout << "usage: ./convert [number to convert]" << std::endl;
	exit(EXIT_SUCCESS);
}

Conversion::~Conversion(void)
{
	// Default destructor
}
