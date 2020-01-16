/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 13:56:08 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/15 15:33:43 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
//	this->_name = name; // We dont need to do this because we already did it in
						// function prototype
	std::cout << "Calling class HumanA" << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << "Calling HumanA destructor" << std::endl;
	return; // Destructor
}

void HumanA::attack(void)
{
	const char *str = " attacks with: ";
	std::cout << this->_name << str << _weapon.getType() << std::endl;
}

/*
int main(void)
{
	{
		Weapon club = Weapon("Crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		std::cout << std::endl;
		club.setType("some other type of club");
		bob.attack();
	}
}
*/
