/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 15:04:16 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/17 16:06:31 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "Calling Default constructor" << std::endl;
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
// Getter functions
std::string ScavTrap::getPlayerName(void) const
{
	return(_playerName);
}

unsigned int ScavTrap::getHitPoints(void) const
{
	return(_hitPoints);
}

unsigned int ScavTrap::getMaxHitPoints(void) const
{
	return(_maxHitPoints);
}

unsigned int ScavTrap::getEnergyPoints(void) const
{
	return(_energyPoints);
}

unsigned int ScavTrap::getMaxEnergyPoints(void) const
{
	return(_maxEnergyPoints);
}

unsigned int ScavTrap::getLevel(void) const
{
	return(_level);
}

unsigned int ScavTrap::getMeleeAttackDamage(void) const
{
	return(_meleeAttackDamage);
}

unsigned int ScavTrap::getRangedAttackDamage(void) const
{
	return(_rangedAttackDamage);
}

unsigned int ScavTrap::getArmorDamageReduction(void) const
{
	return(_armorDamageReduction);
}

int ScavTrap::randomNumberGenerator(int min, int max)
{
	int randomNumber = 0;
	std::random_device rand;
	std::mt19937 gen(rand());
	std::uniform_int_distribution<>iter(min, max);
	randomNumber = iter(gen);	
	return(randomNumber);
}

void ScavTrap::rangedAttack(std::string const &target)
{
	const char *str1 = "[ScavTrap] < ";
	const char *str2 = " > attacks < ";
	const char *str3 = " > with rangedAttack, causing < ";
	const char *str4 = " > points of damage";
	const char *str5 = " cannot take anymore damage.";

	if(_maxHitPoints > 100)
		_maxHitPoints = 0;
	if(_maxHitPoints == 0)
		std::cout << "Target " << target << str5 << std::endl;
	else if(_maxHitPoints > 0)
	{
		std::cout << str1 <<  _playerName << str2 << target;
		std::cout << str3 << _rangedAttackDamage << str4 << std::endl;
	}
}

void ScavTrap::meleeAttack(std:: string const &target)
{
	const char *str1 = "[ScavTrap] < ";
	const char *str2 = " > attacks < ";
	const char *str3 = " > with meleeAttack, causing < ";
	const char *str4 = " > points of damage";
	const char *str5 = " cannot take anymore damage.";

	if(_maxHitPoints > 100)
		_maxHitPoints = 0;	
	if(_maxHitPoints == 0)
		std::cout << "Player " << _playerName << str5 << std::endl;
	else if(_maxHitPoints > 0)
	{
		std::cout << str1 <<  _playerName << str2 << target;
		std::cout << str3 << _meleeAttackDamage << str4 << std::endl;
	}
}

void ScavTrap::takeDamage(unsigned int amount)
{
	const char *str1 = "[ScavTrap] < ";
	const char *str2 = " > attacks target cauing < ";
	const char *str3 = " > points of damage";
	const char *str4 = "[ScavTrap] Energy remaining ";
	const char *str5 = "[ScavTrap] Armor remaining ";
	const char *str6 = "Target cannot take anymore damage.";

	if(_maxHitPoints == 0)
		std::cout << str6 << std::endl;
	else if(_maxHitPoints > 0)
	{
		std::cout << str1 <<  _playerName << str2 << amount << str3 << std::endl;	
		if(_armorDamageReduction > 0)
			_armorDamageReduction--;
		else if(_armorDamageReduction == 0)
			_maxHitPoints = _maxHitPoints - amount;
		if(_maxHitPoints > 100)
			_maxHitPoints = 0;
		std::cout << str4 << _maxHitPoints << std::endl;
		std::cout << str5 << _armorDamageReduction << std::endl;
	}

}

void ScavTrap::beRepaired(unsigned int amount)
{
	const char *str1 = "[ScavTrap] < ";
	const char *str2 = " > energy recoved by < ";
	const char *str3 = " > points. Oh yeah!!!!";
	const char *str4 = "[ScavTrap] New energy < ";

	_maxHitPoints = _maxHitPoints + amount;
	if(_maxHitPoints > 100)
		_maxHitPoints = 100;
	std::cout << str1 << _playerName << str2 << amount << str3 << std::endl;
	std::cout << str4 << _maxHitPoints << str3 << std::endl;
}

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
	const char *str1 = "[ScrapTap] <";
	const char *str2 = "> challenges opponent <";

//	if(_maxEnergyPoints >= 25)
//	{
//		std::cout << str1 << _playerName << str2 << target <<  str3;
//		std::cout << attacks[i] << std::endl;
//		_maxEnergyPoints = _maxEnergyPoints - 25;
//	}
//	else if (_maxEnergyPoints == 0)
//		std::cout << "Cannot use special attack anymore" << std::endl;
	std::cout << str1 << _playerName << str2 << target << challenge[i] << std::endl;
}
