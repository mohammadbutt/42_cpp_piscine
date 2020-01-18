/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 15:03:13 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/17 19:47:54 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <string>
#include <iostream>
#include <random>
#include "ClapTrap.hpp"

/*
**
** Doing the below, we will be able to access public and protected members of
** ClapTrap class:
** 
** class ScavTrap : public ClapTrap
*/

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void); // Default constructor - Canonical
		ScavTrap(std::string const playerName); // Constructor to pass in name
		ScavTrap(const ScavTrap &srcCopy); // Copy constructor - Cannonical	
		ScavTrap &operator = (const ScavTrap &rhs); // Operator assignment - Canonical
		~ScavTrap(void); // Default Destructor - Canonical
	
		// My own member functions / getters to output the value
//		std::string getPlayerName(void) const;
//		unsigned int	getHitPoints(void) const;
//		unsigned int	getMaxHitPoints(void) const;
//		unsigned int	getEnergyPoints(void) const;
//		unsigned int	getMaxEnergyPoints(void) const;
//		unsigned int	getLevel(void) const;
//		unsigned int	getMeleeAttackDamage(void) const;
//		unsigned int	getRangedAttackDamage(void) const;
//		unsigned int	getArmorDamageReduction(void) const;

		// member functions
//		void rangedAttack(std::string const &target);
//		void meleeAttack(std::string const &target);
//		void takeDamage(unsigned int amount);
//		void beRepaired(unsigned int amount);
		void challengeNewComer(std:: string const &target);
//		int  randomNumberGenerator(int min, int max);
	
//	private:
//		std::string		_playerName;
//		unsigned int	_hitPoints;
//		unsigned int	_maxHitPoints;
//		unsigned int	_energyPoints;
//		unsigned int	_maxEnergyPoints;
//		unsigned int	_level;
//		unsigned int	_meleeAttackDamage;
//		unsigned int	_rangedAttackDamage;
//		unsigned int	_armorDamageReduction;
};

# endif
