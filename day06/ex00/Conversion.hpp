/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 19:55:48 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/20 22:50:10 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <ctype.h>

class Conversion
{
	public:
		Conversion(void); // Default construcor - Canonical
		Conversion(std::string userString);
		Conversion(const Conversion &srcCopy); // Copy constructor - Canonical
		Conversion &operator = (const Conversion &rhs); // assignemnt - Canonical
		~Conversion(void); // Default destructor - Canonical
		
		void convertToChar(void);
		void convertToInteger(void);
		void convertToFloat(void);
		void convertToDouble(void);
		void ftExit(void);

	private:
		double		_userNumber;
};

#endif
