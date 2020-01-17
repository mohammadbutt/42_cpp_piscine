/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 12:58:04 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/16 19:23:07 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_fixedPointFraction = 8;

Fixed::Fixed(void) : _fixedPointInteger(0) 
{
	const char *s = "Default constructor called to set _fixedPointInteger to 0";
	
	isInt = false;
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
	std::cout << "Int constructor called" << std::endl;
	isInt = true;
	_fixedPointInteger = fixedPointInteger << _fixedPointFraction;
}


Fixed::Fixed(const float fixedPointInteger)
{
	std::cout << "Float constructor called" << std::endl;
	isInt = false;
	_fixedPointInteger = roundf(fixedPointInteger * (1 << _fixedPointFraction));
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
	return((float)_fixedPointInteger / (1 << _fixedPointFraction));
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
	return(_fixedPointInteger >> _fixedPointFraction);
}

bool Fixed::isIntGetter(void) const
{
	return(isInt);
}

std::ostream &operator<<(std::ostream &output, const Fixed &i)
{
	if(i.isIntGetter() == true)
		output << i.toInt();
	else if(i.isIntGetter() == false)
		output << i.toFloat();
	return(output);
}

int main(void)
{
	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);

	a = Fixed(1234.4321f);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

}
