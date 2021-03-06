/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 15:56:04 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/13 22:11:01 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
//#include "ZombieEvent.hpp"

class Zombie
{
	private:
		std::string _name; // private members prefixed by _ underscore
		std::string _type; // private members prefixed by _ underscore
	public:	
		Zombie(void); // Default
		Zombie(std:: string name, std::string type);
		~Zombie(void);
		void announce(void);
//		std::string type;
//		std::string name;
};

#endif
