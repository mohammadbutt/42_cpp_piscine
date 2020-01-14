/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 18:47:43 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/13 21:53:05 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{
	return; // Calling Constructor
}

ZombieEvent::~ZombieEvent(void)
{
	return; // Destructor
}

int ZombieEvent::randomNumberGenerator(int min, int max)
{
	int randomNumber;
	int difference;
	
	randomNumber = 0;
	difference = max - min;
	randomNumber = arc4random() % (difference + 1);
	randomNumber = randomNumber + min;
	return(randomNumber);
}

void ZombieEvent::setZombieType(std:: string type) //: _type(type)
{
	this->_type = type;
	return;
}

/*
** new Zombie will randomly select a Zombie type and Zombie name and return it.
*/

Zombie *ZombieEvent::newZombie(std::string name)
{	
	Zombie *zombie = new Zombie(name, this->_type);

	return (zombie);
}

Zombie *ZombieEvent::randomChump(void)
{	
	Zombie *zombie;
	std::string names[] = {"Batman", "Superman", "Tony Stark", "Bruce Wayne"};
	std::string types[] = {"human", "super human", "mutant", "superhero"};


	this->setZombieType(types[this->randomNumberGenerator(0, 3)]);
	zombie = this->newZombie(names[ZombieEvent::randomNumberGenerator(0, 3)]);
/*
** Can also just simply call the randomNumberGenerator function, without this->
** and ZombieEvent::
*/	
	zombie->announce();
	return(zombie);
}
