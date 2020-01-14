/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 22:12:56 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/14 13:59:41 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "Calling Zombie Constructor without parameters" << std::endl;
}

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{
	const char *str1 = "Waking up Zombie named ";
	const char *str2 = ", of type ";

	std::cout << str1 << this->_name << str2 << this->_type << std::endl;
}
Zombie::~Zombie(void)
{
	const char *str1 = "Putting to sleep (aka deleting) ";
	const char *str2 = ", of type ";
	std::cout << str1 << this->_name << str2 << this->_type;
	std::cout << std::endl << std::endl;
}

void Zombie::announce(void)
{
	std::cout << "<" << this->_name << "(" << this->_type << ")> ";
	std::cout << "Moarrrrr...." << std::endl;
}

