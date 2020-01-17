/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 19:25:34 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/16 21:50:33 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int _fixedPointInteger;
		const static int _fixedPointFraction;
	public:
		Fixed(void); // Default constructor
		Fixed(const Fixed &src); // Copy constructor
		Fixed(const int fixedInteger);
		Fixed(const float fixedFraction);
		~Fixed(void); // Default destructor
		void setRawBits(int const raw);
		int getRawBits(void) const;
		float toFloat(void) const;
		int toInt(void) const;
		bool isIntGetter(void) const;
		bool isInt;
		
		// Below are the operator overload public members
		Fixed &operator = (const Fixed &rhs);
		
		bool operator >  (const Fixed &rhs) const;
		bool operator >= (const Fixed &rhs) const;
		bool operator <  (const Fixed &rhs) const;
		bool operator <= (const Fixed &rhs) const;
		bool operator == (const Fixed &rhs) const;
		bool operator != (const Fixed &rhs) const;

		Fixed operator + (const Fixed &rhs) const;
		Fixed operator - (const Fixed &rhs) const;
		Fixed operator * (const Fixed &rhs) const;
		Fixed operator / (const Fixed &rhs) const;

		Fixed &operator ++ (void);
		Fixed &operator -- (void);
		Fixed operator ++ (int);
		Fixed operator -- (int);
};

std::ostream &operator << (std::ostream &output, const Fixed &i);

Fixed &min(Fixed &a, Fixed &b);
Fixed &max(Fixed &a, Fixed &b);
const Fixed &min(const Fixed &a, const Fixed &b);
const Fixed &max(const Fixed &a, const Fixed &b);
#endif
