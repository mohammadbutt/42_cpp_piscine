/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 13:16:22 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/10 16:02:54 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
/*
	std::string string_class;
	char str2[5];
	
	string_class.copy(str2, "abcde");

	std::cout << str2 << std::endl;
*/
/*
	std::string command;
	std::getline(std::cin, command);
	if(command == "abcd")
	{
		std::cout << "Looks good" << std::endl;
		std::cout << command << std::endl;
	}
	else if (command != "abcd")
	{
		std::cout << "Bad output" << std::endl;
	}
*/

	std::string name;
	char name2[34];
	int length;

	name = "Cherno";
	std::cout << name << std::endl;
	std::cout << name.size() << std::endl;
	
	name = "Learning C++ by overwriting string";
	std::cout << name << std::endl;
	std::cout << name.size() << std::endl;
	
	length = name.copy(name2, 34, 0);
	name2[length] = '\0';
	std::cout << name2 << std::endl;

}
