/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 11:11:17 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/16 12:28:24 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
	private:
		int _fixedPointInteger; // integer to store fixed point
		static const int _fixedPointFraction; // integer to store fractional bits
	public:
		Fixed(void); // Default constructor - set _fixedPointInteger to 0
		Fixed(Fixed const &src); // Copy constructor
		Fixed & operator=(Fixed const &rhs); // assignation operator overload
		~Fixed(void); // Default destructor
		int getRawBits(void) const; // returns raw value of fixed point value.
		void setRawBits(int const raw); // sets raw value of fixed point value.

};

# endif
