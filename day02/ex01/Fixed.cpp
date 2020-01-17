/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 12:58:04 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/16 16:35:14 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fixedPointFraction = 8;

Fixed::Fixed(void) : _fixedPointInteger(0)
{
	const char *s = "Default constructor called to set _fixedPointInteger to 0";

	std::cout << s << std::endl;
	return;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

/*
 _fixedPointInteger = fixedPointInteger << _fixedPointFraction;

 _fixedPointFraction = 8
 shifts the value of fixedPointInteger to the left by 8 bits
*/

Fixed::Fixed(const int fixedPointInteger)
{
	_fixedPointInteger = fixedPointInteger << _fixedPointFraction;
}


Fixed::Fixed(const float fixedPointInteger)
{

}


Fixed &Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Assignment overlead operator called" << std::endl;
	if(this != &rhs)
		this->_fixedPointInteger = rhs.getRawBits();
	return(*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

void Fixed::setRawBits(int const raw)
{
	this->_fixedPointInteger = raw;

	std::cout << "set _fixedPointInteger member to: ";
	std::cout << this->_fixedPointInteger << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(this->_fixedPointInteger);
}

float Fixed::toFloat(void) const
{
	std::cout << "Calling toFloat member function." << std::endl;

	return(0.0);
}

/*
** Because we initially shifted the value of _fixedPointInteger 8 bits to the
** left, now we need to shift 8 bits to the right to print the right output.
**
** _fixedPointInteger = _fixedPointInteger >> fixedPointFraction;
** fixedPointFraction = 8
** _fixedPointInteger gets shifted 8 bits to the right
*/

int Fixed::toInt(void) const
{
	std::cout << "Calling toInt member function." << std::endl;

	return(_fixedPointInteger >> _fixedPointFraction);
}

std::ostream &operator<<(std::ostream &output, const Fixed &i)
{
	output << "The value of integer: " << i.toInt();

	return(output);
}

int main(void)
{
	Fixed a(42);	
	std::cout << a.toInt() << std::endl << std::endl;
	
	std::cout << a << std::endl;
//	Fixed b(42.2f);
//	std::cout << b.toFloat() << std::endl;
}
