/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 15:04:16 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/17 20:05:32 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "[ScavTrap] calling Default constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string const playerName)
{
	_playerName = playerName;
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_level = 1;
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;

	std::cout << "[ScavTrap] Summoning player: " << _playerName << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &srcCopy)
{
	std::cout << "[ScavTrap] Calling copy player" << std::endl;
	*this = srcCopy;
}

ScavTrap &ScavTrap::operator = (const ScavTrap &rhs)
{

	std::cout << "[ScavTrap] Calling = operator player for ";
	std::cout << _playerName << " and " << rhs.getPlayerName();

	std::cout << std::endl;
	_playerName = rhs.getPlayerName();
	_hitPoints = rhs.getHitPoints();
	_maxHitPoints = rhs.getMaxHitPoints();
	_energyPoints = rhs.getEnergyPoints();
	_maxEnergyPoints = rhs.getMaxEnergyPoints();
	_level = rhs.getLevel();
	_meleeAttackDamage = rhs.getMeleeAttackDamage();
	_rangedAttackDamage = rhs.getRangedAttackDamage();
	_armorDamageReduction = rhs.getArmorDamageReduction();

	std::cout << "[ScavTrap] Player 1 becomes " << _playerName << std::endl;
	return(*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "[ScavTrap] Calling destructor" << std::endl;
}

/*
** Getter functions
** Since we are inheriting ClapTrap class, we will not explicitly type any of
** the getter and attack functions in ScavTrap. We will just inherit these and
** other functions we need from ClapTrap.
*/

void ScavTrap::challengeNewComer(std::string const &target)
{
	int i = randomNumberGenerator(0, 5);
	const char *chal1 = "> to <climb the mountain>";
	const char *chal2 = "> to <eat 100 Popeyes chicken sandwiches>";
	const char *chal3 = "> to <code for 16 hours straight>";
	const char *chal4 = "> to <Fast for 24 hours>";
	const char *chal5 = "> to <Run 10 miles in one hour>";
	const char *chal6 = "> to <Make a website in C programming language>";
	const char *challenge[] = {chal1, chal2, chal3, chal4, chal5, chal6};
	const char *str1 = "[ScavTrap] <";
	const char *str2 = "> challenges opponent <";

	std::cout << str1 << _playerName << str2 << target << challenge[i];
	std::cout << std::endl;
}
