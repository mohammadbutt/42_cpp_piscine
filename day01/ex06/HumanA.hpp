/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 13:49:28 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/15 15:22:56 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

/*
Using Weapon class as refrence inside HumanA class
*/

class HumanA
{
	private:
		std::string _name;
		Weapon &_weapon; // weapon class. Is it better to keep class in private?
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void); // destructor
		void attack(void);
};

#endif
