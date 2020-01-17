/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 14:55:08 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/17 15:50:10 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
int main(void)
{
//	FragTrap fp("Steve");	
//	FragTrap equalPlayer(FragTrap("Player 1") = FragTrap("Player 2"));

	const char *str1 = "[ScrapTap] max heallth: ";
	ScavTrap fp("Steve");
	ScavTrap equalPlayer(ScavTrap("Player 1") = ScavTrap("Player 2"));
	std::cout << "[ScrapTap] " << equalPlayer.getPlayerName() << std::endl;
	fp.rangedAttack("jim");
	std::cout << str1 << fp.getMaxEnergyPoints() << std::endl;
	fp.meleeAttack("jim");
	std::cout << str1 << fp.getMaxEnergyPoints() << std::endl;

	fp.takeDamage(60);
	fp.takeDamage(60);
	fp.takeDamage(60);
	fp.beRepaired(80);
	fp.challengeNewComer("Thomas");
	fp.challengeNewComer("Thomas");
	fp.challengeNewComer("Thomas");
}
