/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 19:28:39 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/17 19:53:01 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "[ClapTrap] calling Default constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string const playerName)
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

	std::cout << "[ClapTrap] Summoning player: " << _playerName << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &srcCopy)
{
	std::cout << "[ClapTrap] Calling copy player" << std::endl;
	*this = srcCopy;
}

ClapTrap &ClapTrap::operator = (const ClapTrap &rhs)
{

	std::cout << "[ClapTrap] Calling = operator player for ";
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

	std::cout << "[ClapTrap] Player 1 becomes " << _playerName << std::endl;
	return(*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "[ClapTrap] Calling destructor" << std::endl;
}
// Getter functions
std::string ClapTrap::getPlayerName(void) const
{
	return(_playerName);
}

unsigned int ClapTrap::getHitPoints(void) const
{
	return(_hitPoints);
}

unsigned int ClapTrap::getMaxHitPoints(void) const
{
	return(_maxHitPoints);
}

unsigned int ClapTrap::getEnergyPoints(void) const
{
	return(_energyPoints);
}

unsigned int ClapTrap::getMaxEnergyPoints(void) const
{
	return(_maxEnergyPoints);
}

unsigned int ClapTrap::getLevel(void) const
{
	return(_level);
}

unsigned int ClapTrap::getMeleeAttackDamage(void) const
{
	return(_meleeAttackDamage);
}

unsigned int ClapTrap::getRangedAttackDamage(void) const
{
	return(_rangedAttackDamage);
}

unsigned int ClapTrap::getArmorDamageReduction(void) const
{
	return(_armorDamageReduction);
}

int ClapTrap::randomNumberGenerator(int min, int max)
{
	int randomNumber = 0;
	std::random_device rand;
	std::mt19937 gen(rand());
	std::uniform_int_distribution<>iter(min, max);
	randomNumber = iter(gen);	
	return(randomNumber);
}

void ClapTrap::rangedAttack(std::string const &target)
{
	const char *str1 = "[ClapTrap] < ";
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

void ClapTrap::meleeAttack(std:: string const &target)
{
	const char *str1 = "[ClapTrap] < ";
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

void ClapTrap::takeDamage(unsigned int amount)
{
	const char *str1 = "[ClapTrap] < ";
	const char *str2 = " > attacks target cauing < ";
	const char *str3 = " > points of damage";
	const char *str4 = "[ClapTrap] Energy remaining ";
	const char *str5 = "[ClapTrap] Armor remaining ";
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

void ClapTrap::beRepaired(unsigned int amount)
{
	const char *str1 = "[ClapTrap] < ";
	const char *str2 = " > energy recoved by < ";
	const char *str3 = " > points. Oh yeah!!!!";
	const char *str4 = "[ClapTrap] New energy < ";

	_maxHitPoints = _maxHitPoints + amount;
	if(_maxHitPoints > 100)
		_maxHitPoints = 100;
	std::cout << str1 << _playerName << str2 << amount << str3 << std::endl;
	std::cout << str4 << _maxHitPoints << str3 << std::endl;
}

/*
void ClapTrap::challengeNewComer(std::string const &target)
{
	int i = randomNumberGenerator(0, 5);
	const char *chal1 = "> to <climb the mountain>";
	const char *chal2 = "> to <eat 100 Popeyes chicken sandwiches>";
	const char *chal3 = "> to <code for 16 hours straight>";
	const char *chal4 = "> to <Fast for 24 hours>";
	const char *chal5 = "> to <Run 10 miles in one hour>";
	const char *chal6 = "> to <Make a website in C programming language>";
	const char *challenge[] = {chal1, chal2, chal3, chal4, chal5, chal6};
	const char *str1 = "[ClapTap] <";
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
*/
