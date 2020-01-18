/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 14:55:08 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/17 16:06:28 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
int main(void)
{
//	FragTrap fp("Steve");	
//	FragTrap equalPlayer(FragTrap("Player 1") = FragTrap("Player 2"));
	const char *str1 = "[FragTrap] max heallth: ";
	FragTrap ft("Steve");
	FragTrap equalPlayer1(FragTrap("Player 1") = FragTrap("Player 2"));
	std::cout << "[FragTrap] " << equalPlayer1.getPlayerName() << std::endl;
	ft.rangedAttack("jim");
	std::cout << str1 << ft.getMaxEnergyPoints() << std::endl;
	ft.meleeAttack("jim");
	std::cout << str1 << ft.getMaxEnergyPoints() << std::endl;
	ft.takeDamage(60);
	ft.takeDamage(60);
	ft.takeDamage(60);
	ft.beRepaired(80);
	ft.vaulthunter_dot_exe("Thomas");
	ft.vaulthunter_dot_exe("Thomas");
	ft.vaulthunter_dot_exe("Thomas");
	
	std::cout << "---------------------------------" << std::endl << std::endl;
	const char *str2 = "[ScavTrap] max health: ";
	ScavTrap st("Steve");
	ScavTrap equalPlayer2(ScavTrap("Player 1") = ScavTrap("Player 2"));
	std::cout << "[ScavTrap] " << equalPlayer2.getPlayerName() << std::endl;
	st.rangedAttack("jim");
	std::cout << str2 << st.getMaxEnergyPoints() << std::endl;
	st.meleeAttack("jim");
	std::cout << str2 << st.getMaxEnergyPoints() << std::endl;

	st.takeDamage(60);
	st.takeDamage(60);
	st.takeDamage(60);
	st.beRepaired(80);
	st.challengeNewComer("Thomas");
	st.challengeNewComer("Thomas");
	st.challengeNewComer("Thomas");
}
