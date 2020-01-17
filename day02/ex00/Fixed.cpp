/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 11:21:30 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/16 16:25:56 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
** Defauly constructor sets value of _fixedPointInteger to 0.
** _fixedPointFraction is also set to 0. We are not using it but it's better to
** not leave any values uninitialized.
**
** Since _fixedPointFraction is of static type, we have to declare it's value
** outside
*/

int _fixedPointFraction = 0;

Fixed::Fixed(void) : _fixedPointInteger(0)
{
	const char *s = "Defauly constructor sets value of _fixedPointInteger to 0.";
	std::cout << s << std::endl;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	if(this != &rhs)
		this->_fixedPointInteger = rhs.getRawBits();
	return (*this);
}
void Fixed::setRawBits(int const raw)
{
	this->_fixedPointInteger = raw;

	std::cout << "set _fixedPointInteger value to: ";
	std::cout << this->_fixedPointInteger << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(this->_fixedPointInteger);
}


Fixed::~Fixed(void)
{
	std::cout << "Calling destructor" << std::endl;
}

int main(void)
{
	Fixed a;

	a.setRawBits(22);
	Fixed b(a);
	Fixed c;

	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	a.setRawBits(2147483647);
	std::cout << a.getRawBits() << std::endl;
}
