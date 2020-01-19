/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpaceObject.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 15:02:17 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/19 15:08:18 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpaceObject.cpp"

SpaceObject::SpaceObject(void)
{
	std::cout << "Calling default constructor for SpaceObject class";
	std::cout << std::endl;
}

SpaceObject::SpaceObject(const SpaceObject &srcCopy)
{
	std::cout << "Calling copy constructor for SpaceObject class";
	std::cout << std::endl;
}

SpaceObject &SpaceObject::operator = (const SpaceObject &rhs)
{
	std::cout << "Equal operator to set values for SpaceObject class";
	std::cout << std::endl;
	return(*this);
}

SpaceObject::~SpaceObject(void)
{
	std::cout << "Calling destructor for SpaceObject class";
}
