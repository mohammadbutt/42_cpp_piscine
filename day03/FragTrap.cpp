/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 10:05:36 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/17 12:31:12 by mbutt            ###   ########.fr       */
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

FragTrap::FragTrap(const FragTrap &srcCopy)
{
	std::cout << "Calling copy player" << std::endl;
	*this = srcCopy;
}

FragTrap &FragTrap::operator = (const FragTrap &rhs)
{

	std::cout << "Calling = operator player for ";
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

	std::cout << "Player 1 becomes " << _playerName << std::endl;
	return(*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "Calling destructor" << std::endl;
}
// Getter functions
std::string FragTrap::getPlayerName(void) const
{
	return(_playerName);
}

unsigned int FragTrap::getHitPoints(void) const
{
	return(_hitPoints);
}

unsigned int FragTrap::getMaxHitPoints(void) const
{
	return(_maxHitPoints);
}

unsigned int FragTrap::getEnergyPoints(void) const
{
	return(_energyPoints);
}

unsigned int FragTrap::getMaxEnergyPoints(void) const
{
	return(_maxEnergyPoints);
}

unsigned int FragTrap::getLevel(void) const
{
	return(_level);
}

unsigned int FragTrap::getMeleeAttackDamage(void) const
{
	return(_meleeAttackDamage);
}

unsigned int FragTrap::getRangedAttackDamage(void) const
{
	return(_rangedAttackDamage);
}

unsigned int FragTrap::getArmorDamageReduction(void) const
{
	return(_armorDamageReduction);
}

void FragTrap::rangedAttack(std::string const &target)
{
	const char *str1 = "FR4G-TP < ";
	const char *str2 = " > attacks < ";
	const char *str3 = " > with rangedAttack, causing < ";
	const char *str4 = " > points of damage";
	const char *str5 = " cannot take anymore damage.";

	if(_maxEnergyPoints > 0)
	{
		std::cout << str1 <<  _playerName << str2 << target;
		std::cout << str3 << _rangedAttackDamage << str4 << std::endl;
		_maxEnergyPoints = _maxEnergyPoints - _rangedAttackDamage;
	}
	else if(_maxEnergyPoints == 0)
		std::cout << "Player " << _playerName << str5 << std::endl;

}

void FragTrap::meleeAttack(std:: string const &target)
{
	const char *str1 = "FR4G-TP < ";
	const char *str2 = " > attacks < ";
	const char *str3 = " > with meleeAttack, causing < ";
	const char *str4 = " > points of damage";
	const char *str5 = " cannot take anymore damage.";

	if(_maxEnergyPoints > 0)
	{
		std::cout << str1 <<  _playerName << str2 << target;
		std::cout << str3 << _meleeAttackDamage << str4 << std::endl;
		_maxEnergyPoints = _maxEnergyPoints - _meleeAttackDamage;
	}
	else if(_maxEnergyPoints == 0)
		std::cout << "Player " << _playerName << str5 << std::endl;

}


int main(void)
{
	FragTrap fp("Steve");
	FragTrap equalPlayer(FragTrap("Player 1") = FragTrap("Player 2"));

	std::cout << equalPlayer.getPlayerName() << std::endl;
	fp.rangedAttack("jim");
	std::cout << fp.getMaxEnergyPoints() << std::endl;
	fp.rangedAttack("jim");
	std::cout << fp.getMaxEnergyPoints() << std::endl;
	fp.meleeAttack("jim");
	std::cout << fp.getMaxEnergyPoints() << std::endl;
	fp.meleeAttack("John");
	std::cout << fp.getMaxEnergyPoints() << std::endl;

}
