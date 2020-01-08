/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_stdio_stream.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 16:53:15 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/07 17:54:00 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>



int main(void)
{
	char buff[512];

	std::cout << "Hello World !" << std::endl;
	
	std::cout << "Input a word: ";
	std::cin >> buff;
	std::cout << "You entered: ["<<  buff << "]" << std::endl;

	std::cout << std::endl; // Extra newline for test

	return(0);
}


/*
// Note: \n may not work on linux and windows. carriage return is different on
// operating systems, so std::endl; is used instead, making it compatible across
// different operating systems
//
int main(void)
{
	char buff[512];

	std::cout << "Hello World !\n";

	std::cout << "Input a word: ";
	std::cin >> buff;
	std::cout << "You entered: ["<< buff << "]\n";
}
*/
