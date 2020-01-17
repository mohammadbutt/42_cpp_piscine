/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 09:54:55 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/17 10:57:10 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <string>
#include <iostream>

class FragTrap
{
	public:
		FragTrap(void); // Default constructor - Canonical
		FragTrap(std::string const playerName); // Constructor to pass in name
		FragTrap(const FragTrap &src); // Copy constructor - Cannonical	
		FragTrap &operator = (const FragTrap &rhs); // Operator assignment - Canonical
		~FragTrap(void); // Default Destructor - Canonical
	
	private:
		std::string	 _playerName;
		unsigned int _hitPoints;
		unsigned int _maxHitPoints;
		unsigned int _energyPoints;
		unsigned int _maxEnergyPoints;
		unsigned int _level;
		unsigned int _meleeAttackDamage;
		unsigned int _rangedAttackDamage;
		unsigned int _armorDamageReduction;

		// member functions
		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void vaulthunter_dot_exe(std::string const &target);

		// Additional member functions / getters to output the value
		std::string getPlayerName(void) const;
		unsigned int getHitPoints(void) const;
		unsigned int getMaxHitPoints(void) const;
		unsigned int getEnergyPoints(void) const;
		unsigned int getMaxEnergyPoints(void) const;
		unsigned int getLevel(void) const;
		unsigned int getMeleeAttackDamage(void) const;
		unsigned int getRangedAttackDamage(void) const;
		unsigned int getArmorDamageReduction(void) const;


		// member variables
};


# endif
