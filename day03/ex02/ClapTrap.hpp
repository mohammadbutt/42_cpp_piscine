/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 19:18:33 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/17 20:05:36 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>
#include <random>

class ClapTrap
{
	public:
		ClapTrap(void); // Default constructor - Cnonical
		ClapTrap(std::string const playerName); // constructor to pass in name
		ClapTrap(const ClapTrap &srcCopy); // Copy constructor - canonical
		ClapTrap &operator = (const ClapTrap &rhs); // operator assignemnt - Canonical
		~ClapTrap(void); // Default Destructor - Canonical

		// My own member functions / getters to output the value
		std::string getPlayerName(void) const;
		unsigned int	getHitPoints(void) const;
		unsigned int	getMaxHitPoints(void) const;
		unsigned int	getEnergyPoints(void) const;
		unsigned int	getMaxEnergyPoints(void) const;
		unsigned int	getLevel(void) const;
		unsigned int	getMeleeAttackDamage(void) const;
		unsigned int	getRangedAttackDamage(void) const;
		unsigned int	getArmorDamageReduction(void) const;

		// member functions
		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		int  randomNumberGenerator(int min, int max);

	protected:
		std::string		_playerName;
		unsigned int	_hitPoints;
		unsigned int	_maxHitPoints;
		unsigned int	_energyPoints;
		unsigned int	_maxEnergyPoints;
		unsigned int	_level;
		unsigned int	_meleeAttackDamage;
		unsigned int	_rangedAttackDamage;
		unsigned int	_armorDamageReduction;
};

#endif
