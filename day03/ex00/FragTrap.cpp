/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 10:05:36 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/17 14:56:03 by mbutt            ###   ########.fr       */
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
	_randomNumber = 0;

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

int FragTrap::randomNumberGenerator(int min, int max)
{
	int randomNumber = 0;
	std::random_device rand;
	std::mt19937 gen(rand());
	std::uniform_int_distribution<>iter(min, max);
	randomNumber = iter(gen);	
	return(randomNumber);
}

void FragTrap::rangedAttack(std::string const &target)
{
	const char *str1 = "FR4G-TP < ";
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

void FragTrap::meleeAttack(std:: string const &target)
{
	const char *str1 = "FR4G-TP < ";
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

void FragTrap::takeDamage(unsigned int amount)
{
	const char *str1 = "FR4G-TP < ";
	const char *str2 = " > attacks target cauing < ";
	const char *str3 = " > points of damage";
	const char *str4 = "Energy remaining ";
	const char *str5 = "Armor remaining ";
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

void FragTrap::beRepaired(unsigned int amount)
{
	const char *str1 = "FR4G-TP < ";
	const char *str2 = " > energy recoved by < ";
	const char *str3 = " > points. Oh yeah!!!!";
	const char *str4 = "New energy < ";

	_maxHitPoints = _maxHitPoints + amount;
	if(_maxHitPoints > 100)
		_maxHitPoints = 100;
	std::cout << str1 << _playerName << str2 << amount << str3 << std::endl;
	std::cout << str4 << _maxHitPoints << str3 << std::endl;
}

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
	const char *str1 = "FR4G-TP <";
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

