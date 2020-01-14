/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 22:51:11 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/14 14:13:33 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(void)
{

	std::cout << "Calling Constructor from ZombieHorde \n";
	return;
}

ZombieHorde::ZombieHorde(int numberOfZombies)
{
	this->_numberOfZombies = numberOfZombies;
}

ZombieHorde::~ZombieHorde(void)
{
	std::cout << "Calling destructor from ZombieHorde\n";
	return;
}

int ZombieHorde::randomNumberGenerator(int min, int max)
{
	int randomNumber;
	int difference;

	randomNumber = 0;
	difference = max - min;

	randomNumber = arc4random() % (difference + 1);
	randomNumber = randomNumber + min;
	return(randomNumber);
}

void ZombieHorde::setZombieType(std::string type)
{
	this->_type = type;
	return;
}

Zombie *ZombieHorde::newZombie(std::string name)
{
	Zombie *zombie = new Zombie(name, this->_type);
	return(zombie);
}

Zombie *ZombieHorde::randomZombie(void)
{
	Zombie *zombie;

	std::string name[] = {"Wolverine", "Iron-man", "Batman", "Yellow-Ranger"};
	std::string type[] = {"X-Men", "Marvel", "DC", "Ranger"};

	this->setZombieType(type[this->randomNumberGenerator(0, 3)]);
	zombie = this->newZombie(name[ZombieHorde::randomNumberGenerator(0, 3)]);
	zombie->announce();
	return(zombie);
}

void	ZombieHorde::userReleaseZombie(int numberOfZombies)
{
	int i = 0;
	Zombie		*zombie;
	while(i < numberOfZombies)
	{
//		zombie = ZombieHorde::randomZombie(); // Can use this to call function
//		zombie = this->randomZombie(); // Can use this to call function
		zombie = randomZombie();
		delete (zombie);
		i++;
	}
}
