/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 19:55:48 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/20 20:20:10 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP

#include <iostream>
#include <string>


class Conversion
{
	public:
		Conversion(void); // Default construcor - Canonical
		Conversion(std::string userString);
		Conversion(const Conversion &srcCopy); // Copy constructor - Canonical
		Conversion &operator = (const Conversion &rhs); // assignemnt - Canonical
		~Conversion(void); // Default destructor - Canonical
	private:
		std::string _userString;
};


#endif
