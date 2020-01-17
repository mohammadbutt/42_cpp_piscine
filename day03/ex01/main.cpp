/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 14:55:08 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/17 15:30:45 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
int main(void)
{
//	FragTrap fp("Steve");	
//	FragTrap equalPlayer(FragTrap("Player 1") = FragTrap("Player 2"));

	ScavTrap fp("Steve");
	ScavTrap equalPlayer(ScavTrap("Player 1") = ScavTrap("Player 2"));
	std::cout << equalPlayer.getPlayerName() << std::endl;
	fp.rangedAttack("jim");
	std::cout << fp.getMaxEnergyPoints() << std::endl;
	fp.rangedAttack("jim");
	std::cout << fp.getMaxEnergyPoints() << std::endl;
	fp.meleeAttack("jim");
	std::cout << fp.getMaxEnergyPoints() << std::endl;
	fp.meleeAttack("John");
	std::cout << fp.getMaxEnergyPoints() << std::endl;
	fp.meleeAttack("John");
	std::cout << fp.getMaxEnergyPoints() << std::endl;

	fp.takeDamage(40);
	fp.takeDamage(40);
	fp.takeDamage(40);
	fp.takeDamage(40);
	fp.takeDamage(40);
	fp.beRepaired(40);
	fp.beRepaired(40);
	fp.challengeNewComer("Thomas");
	fp.challengeNewComer("Thomas");
	fp.challengeNewComer("Thomas");
	fp.challengeNewComer("Thomas");
	fp.challengeNewComer("Thomas");

}
