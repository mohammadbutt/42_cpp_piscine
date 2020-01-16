/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 14:37:59 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/15 15:44:06 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void)
{
	return;
}

HumanB::HumanB(std::string name) : _name(name)
{
	std::cout << "Calling class HumanB" << std::endl;
	return;
}

HumanB::~HumanB(void)
{
	std::cout << "Calling HumanB destructor" << std::endl;
}

void HumanB::attack(void)
{
	const char *str = " attacks with: ";
	std::cout << this->_name << str << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) //: _weapon(weapon);
{
	this->_weapon = &weapon;
}

/*
int main(void)
{
	{
		Weapon club = Weapon("crude spiked club");

		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		std::cout << std::endl;
		club.setType("some other type of club");
		jim.attack();
	}
}
*/
