/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 12:57:11 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/16 19:46:09 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <typeinfo>

class Fixed
{
	public:
		Fixed(void); // Default constructor
		Fixed(const Fixed &src); // Copy constructor
		Fixed(const int fixedPointInteger); // Constructor that takes const int
		Fixed(const float fixedPointInteger); // Constructor that takes const float
		Fixed &operator=(const Fixed &rhs); // Assignment overload operator
		~Fixed(void); // Default destructor
		void	setRawBits(int const raw); // set raw value of _fixedPointInteger
		int		getRawBits(void) const; // returns raw value of _fixedPointInteger
		float	toFloat(void) const; // Converts fixed point value to floating point
		int 	toInt(void) const; // Converts fixed point value to integer.
		bool	isIntGetter(void) const;
		bool	isInt;

	private:
		int					_fixedPointInteger;
		static const int	_fixedPointFraction;
};

std::ostream &operator << (std::ostream &output, const Fixed &i);

# endif
