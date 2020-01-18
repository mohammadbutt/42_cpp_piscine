/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 10:05:36 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/17 20:02:12 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "[FragTrap] calling Default constructor" << std::endl;
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

	std::cout << "[FragTrap] Summoning player: " << _playerName << std::endl;
}

FragTrap::FragTrap(const FragTrap &srcCopy)
{
	std::cout << "[FragTrap] Calling copy player" << std::endl;
	*this = srcCopy;
}

FragTrap &FragTrap::operator = (const FragTrap &rhs)
{

	std::cout << "[FragTrap] Calling = operator player for ";
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

	std::cout << "[FragTrap] Player 1 becomes " << _playerName << std::endl;
	return(*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "[FragTrap] Calling destructor" << std::endl;
}

/*
** Since we are inheriting ClapTrap class, we will not explicitly type any of
** the getter and attack functions in FragTrap. We will just inherit these and
** other functions we need from ClapTrap.
*/

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	int i = randomNumberGenerator(0, 5);
	const char *atk1 = "hadokinnnnnnnnnnn>";
	const char *atk2 = "sharokinnnnnnnnnn>";
	const char *atk3 = "yoga snooooooowww>";
	const char *atk4 = "kamahamahaaaaaaaa>";
	const char *atk5 = "thunderrrrrrrrrrr>";
	const char *atk6 = "freezeeeeeeeeeeee>";
	const char *attacks[] = {atk1, atk2, atk3, atk4, atk5, atk6};
	const char *str1 = "[FragTrap] <";
	const char *str2 = "> attacks target <";
	const char *str3 = "> with Special attack: <";
	
	if(_maxEnergyPoints >= 25)
	{
		std::cout << str1 << _playerName << str2 << target <<  str3;
		std::cout << attacks[i] << std::endl;
		_maxEnergyPoints = _maxEnergyPoints - 25;
	}
	else if (_maxEnergyPoints == 0)
		std::cout << "Cannot use special attack anymore" << std::endl;
}
