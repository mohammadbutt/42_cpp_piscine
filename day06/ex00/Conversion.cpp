/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 20:04:38 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/20 20:18:59 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion(void)
{
	std::cout << "Calling default constructor" << std::endl;
}

Conversion::Conversion(std::string userString)
{
	_userString = userString;
}

Conversion::Conversion(const Conversion &srcCopy)
{
	*this = srcCopy;
}

Conversion &Conversion::operator = (const Conversion &rhs)
{
	if(this != &rhs)
		*this = rhs;
	return(*this);
}

Conversion::~Conversion(void)
{
	// Default destructor
}

int main(void)
{
	Conversion convert;
}
