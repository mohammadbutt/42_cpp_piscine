/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 11:11:17 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/16 14:20:28 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

/*
** Canonical form constructor
*/

class Fixed
{
	public:
		Fixed(void); // Default constructor - set _fixedPointInteger to 0
		Fixed(const Fixed &src); // Copy constructor
		Fixed &operator=(const Fixed &rhs); // assignation operator overload
		~Fixed(void); // Default destructor	
		void setRawBits(int const raw); // sets raw value of fixed point value.
		int getRawBits(void) const; // returns raw value of fixed point value.
	private:
		int _fixedPointInteger; // integer to store fixed point
		static const int _fixedPointFraction; // integer to store fractional bits
};

# endif
