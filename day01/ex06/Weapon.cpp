/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 22:55:54 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/15 15:33:33 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
	std::cout << "Constructor with no weapon called" << std::endl;
}

Weapon::Weapon(std::string type)
{
	std::cout << "Calling constructor with weapon: ";
	Weapon::setType(type);

	std::cout << Weapon::getType() << std::endl;
//	std::cout << this->getType() << std::endl;
//	std::cout << getType() << std::endl; // All of the above 2 mean the same thing

/*
** Above two commented ways can also be used to call the function getType();
**
** Alternatively any of the below comments can also be used to return string
** _type from class Weapon.
** Function getType() pretty much returns string _type.
*/

//	std::cout << "Created weapon of type " << Weapon::_type << std::endl;
//	std::cout << "Created weapon of type " << this->_type << std::endl;
//	std::cout << "Created weapon of type " << _type << std::endl;
}

Weapon::~Weapon(void)
{
	std::cout << "Calling Weapon Destructor" << std::endl << std::endl;
}

const std::string Weapon::getType(void) const
{
	return(_type); 
//	return(this->_type);
//	return(Weapon::_type); // All of the above mean the same thing
}

void Weapon::setType(std::string type)
{
	this->_type = type;
}

/*
int main(void)
{
	Weapon weapon("crude spike");
}
*/
