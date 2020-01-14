/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 16:22:46 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/13 21:56:02 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"



Zombie::Zombie(void) : _name("Default-zombie-name"), _type("Default-zombie-type")
{
	const char *str1 = "Waking up ";
	const char *str2 = ", of ";
	std::cout << str1 << this->_name << str2 << this->_type << std::endl;

}

Zombie::Zombie(std::string name, std::string type) : _type(type), _name(name)
{
	const char *str1 = "Waking up Zombie named ";
	const char *str2 = ", of type ";
	std::cout << str1 << this->_name << str2 << this->_type << std::endl;
}

void Zombie::announce(void)
{
	std::cout << std::endl;
	std::cout << "<" << this->_name << "(" << this->_type << ")> ";
	std::cout << "Braiiiiiiiiinsss....." << std::endl << std::endl;
}

Zombie::~Zombie(void)
{
	const char *str1 = "Putting to sleep (aka deleting) ";
	const char *str2 = ", of type ";
	std::cout <<str1 << this->_name << str2 << this->_type << std::endl;
}
