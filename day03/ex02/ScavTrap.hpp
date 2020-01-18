/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 15:03:13 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/17 19:56:32 by mbutt            ###   ########.fr       */
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
	
		void challengeNewComer(std:: string const &target);
};

# endif
