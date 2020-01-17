/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 10:05:36 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/17 10:57:07 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "Calling Default constructor" << std::endl;
}

FragTrap::FragTrap(std::string const playerName)
{
	_playerName = playerName;
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;

	std::cout << "Summoning player: " << _playerName << std::endl;
}

// Getter functions
std::string FragTrap::getPlayerName(void) const
{
	return(_playerName);
}

unsigned int getHitPoints(void) const
{
	return(_hitPoints);
}

unsigned int getMaxHitPoints(void) const
{
	return(_maxHitPoints);
}

unsigned int 

FragTrap::~FragTrap(void)
{
	std::cout << "Calling destructor" << std::endl;
}

int main(void)
{
	FragTrap fp("Steve");
}
