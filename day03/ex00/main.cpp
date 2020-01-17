/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 14:55:08 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/17 14:55:22 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap fp("Steve");
	FragTrap equalPlayer(FragTrap("Player 1") = FragTrap("Player 2"));

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

	fp.takeDamage(20);
	fp.takeDamage(20);
	fp.takeDamage(20);
	fp.takeDamage(20);
	fp.takeDamage(20);
	fp.takeDamage(20);
	fp.takeDamage(20);
	fp.takeDamage(20);
	fp.beRepaired(20);
	fp.beRepaired(20);
	fp.vaulthunter_dot_exe("Thomas");
	fp.vaulthunter_dot_exe("Thomas");
	fp.vaulthunter_dot_exe("Thomas");
	fp.vaulthunter_dot_exe("Thomas");
	fp.vaulthunter_dot_exe("Thomas");
	fp.vaulthunter_dot_exe("Thomas");

}
