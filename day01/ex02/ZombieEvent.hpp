/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 18:23:39 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/13 21:57:00 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

//#include <iostream>
//#include <string>
#include <stdlib.h>
#include "Zombie.hpp"

class ZombieEvent
{
	private:
		std::string _type; // private variable member prefixed with _
	public:
		ZombieEvent(void);
		~ZombieEvent(void);
		void setZombieType(std::string type); //
		Zombie *newZombie(std::string name); // create a Zombie with chosen type and name
		int		randomNumberGenerator(int min, int max);
		Zombie	*randomChump(void);
		
};

#endif
