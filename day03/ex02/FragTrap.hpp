/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 09:54:55 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/17 19:56:28 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <string>
#include <iostream>
#include <random>
#include "ClapTrap.hpp"
/*
** Doing the below we will be able to access the public and protected members of
** ClapTrap class:
** class FragTrap : public ClapTrap
*/

class FragTrap : public ClapTrap
{
	public:
		FragTrap(void); // Default constructor - Canonical
		FragTrap(std::string const playerName); // Constructor to pass in name
		FragTrap(const FragTrap &srcCopy); // Copy constructor - Cannonical	
		FragTrap &operator = (const FragTrap &rhs); // Operator assignment - Canonical
		~FragTrap(void); // Default Destructor - Canonical

		void vaulthunter_dot_exe(std::string const &target);
};

# endif
