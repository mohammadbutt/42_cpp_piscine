/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 22:34:29 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/14 14:13:36 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include <iostream>
#include <string>
#include <stdlib.h>
#include "Zombie.hpp"

class ZombieHorde
{
	private:
		std::string _type;
		int _numberOfZombies;
	public:
		ZombieHorde(void);
		ZombieHorde(int numberOfZombies);
		~ZombieHorde(void);
		void 	setZombieType(std::string type);
		Zombie *newZombie(std::string name);
		int 	randomNumberGenerator(int min, int max);
		Zombie 	*randomZombie(void);
		void	userReleaseZombie(int numberOfZombies);
};

#endif
