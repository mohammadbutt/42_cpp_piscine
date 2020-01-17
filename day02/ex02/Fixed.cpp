/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 12:58:04 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/16 21:51:20 by mbutt            ###   ########.fr       */
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

// Below are the operator overload functions
//
Fixed &Fixed::operator = (const Fixed &rhs)
{
	std::cout << "Assignment overload operator called" << std::endl;
	if(this != &rhs)
		this->_fixedPointInteger = rhs.getRawBits();
	return(*this);
}

bool Fixed::operator > (const Fixed &rhs) const
{
	return(_fixedPointInteger > rhs.getRawBits());
}

bool Fixed::operator >= (const Fixed &rhs) const
{
	return(_fixedPointInteger >= rhs.getRawBits());
}

bool Fixed::operator < (const Fixed &rhs) const
{
	return(_fixedPointInteger < rhs.getRawBits());
}

bool Fixed::operator <= (const Fixed &rhs) const
{
	return(_fixedPointInteger <= rhs.getRawBits());
}

bool Fixed::operator == (const Fixed &rhs) const
{
	return(_fixedPointInteger == rhs.getRawBits());
}

bool Fixed::operator != (const Fixed &rhs) const
{
	return(_fixedPointInteger != rhs.getRawBits());
}

Fixed Fixed::operator + (const Fixed &rhs) const
{
	return(Fixed(toFloat() + rhs.toFloat()));
}

Fixed Fixed::operator - (const Fixed &rhs) const
{
	return(Fixed(toFloat() - rhs.toFloat()));
}


Fixed Fixed::operator * (const Fixed &rhs) const
{
	return(Fixed(toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator / (const Fixed &rhs) const
{
	return(Fixed(toFloat() / rhs.toFloat()));
}

Fixed &Fixed::operator ++ (void) // pre-increment
{

	_fixedPointInteger++;
//	std::cout << "Comes here :" << std::endl;
	return(*this);
}

Fixed &Fixed::operator -- (void) // pre-increment
{
	_fixedPointInteger--;
	return(*this);
}

Fixed Fixed::operator ++ (int) // post-increment
{
	Fixed temp = *this;
	_fixedPointInteger++;
	return(temp);
}

Fixed Fixed::operator -- (int) // post increment
{
	Fixed temp = *this;
	_fixedPointInteger--;
	return(temp);
}


Fixed &min(Fixed &a, Fixed &b)
{
	if(a < b)
		return(a);
	else
		return(b);
}

Fixed &max(Fixed &a, Fixed &b)
{
	if(a > b)
		return(a);
	else
		return(b);
}

const Fixed &min(const Fixed &a, const Fixed &b)
{
	if(a < b)
		return(a);
	else
		return(b);
}

const Fixed &max(const Fixed &a, const Fixed &b)
{
	if(a > b)
		return(a);
	else
		return(b);
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

	std::cout << "Testing operator overload" << std::endl << std::endl;

	Fixed const num1(Fixed(10) > Fixed(20));
	Fixed const num2(Fixed(20) > Fixed(10));	

	Fixed const num3(Fixed(10) >= Fixed(20));
	Fixed const num4(Fixed(20) >= Fixed(10));

	Fixed const num5(Fixed(10) < Fixed(20));
	Fixed const num6(Fixed(20) < Fixed(10));


	Fixed const num7(Fixed(10) <= Fixed(20));
	Fixed const num8(Fixed(20) <= Fixed(10));


	Fixed const num9(Fixed(10) == Fixed(20));
	Fixed const num10(Fixed(20) == Fixed(10));


	Fixed const num11(Fixed(10) != Fixed(20));
	Fixed const num12(Fixed(20) != Fixed(10));


	Fixed const num13(Fixed(10) + Fixed(20));
	Fixed const num14(Fixed(24.4f) + Fixed(24.4f));


	Fixed const num15(Fixed(20) - Fixed(10));
	Fixed const num16(Fixed(30.97f) - Fixed(24.4f));

	Fixed const num17(Fixed(20) * Fixed(10));
	Fixed const num18(Fixed(30.97f) * Fixed(24.4f));

	Fixed const num19(Fixed(20) / Fixed(10));
	Fixed const num20(Fixed(30.97f) / Fixed(24.4f));

	std::cout << "> " <<  num1 << std::endl;
	std::cout << "> " <<  num2 << std::endl << std::endl;

	std::cout << ">= " << num3 << std::endl;
	std::cout << ">= "<<  num4 << std::endl << std::endl;

	std::cout << "< " << num5 << std::endl;
	std::cout << "< "<<  num6 << std::endl << std::endl;

	std::cout << "<= " << num7 << std::endl;
	std::cout << "<= "<<  num8 << std::endl << std::endl;

	std::cout << "== " << num9 << std::endl;
	std::cout << "== "<<  num10 << std::endl << std::endl;


	std::cout << "!= " << num11 << std::endl;
	std::cout << "!= "<<  num12 << std::endl << std::endl;

	std::cout << "+ "<<  num13 << std::endl;
	std::cout << "+ "<<  num14 << std::endl << std::endl;

	std::cout << "- "<<  num15 << std::endl;
	std::cout << "- "<<  num16 << std::endl << std::endl;

	std::cout << "* "<<  num17 << std::endl;
	std::cout << "* "<<  num18 << std::endl << std::endl;


	std::cout << "* "<<  num19 << std::endl;
	std::cout << "* "<<  num20 << std::endl << std::endl;

	Fixed t;

	std::cout << "|1| " << t << std::endl;
	std::cout << "|2| "<< ++t << std::endl;
	std::cout << "|3| " << t << std::endl;
	std::cout << "|4| " << t++ << std::endl;
	std::cout << "|5| " << t << std::endl;

	Fixed u;
	Fixed const v( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << u << std::endl;
	std::cout << ++u << std::endl;
	std::cout << u << std::endl;
	std::cout << u++ << std::endl;
	std::cout << "u: " << u << std::endl;
	std::cout << "v: " << v << std::endl;
	std::cout << max( u, v ) << std::endl;
	std::cout << min( u, v ) << std::endl;

}


