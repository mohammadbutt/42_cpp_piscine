/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 21:14:47 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/08 21:25:04 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

void f0(void)
{
	Sample instance;

	std::cout << "1. Number of instances = " << Sample::getNbInst() << std::endl;
}

void f1(void)
{
	Sample instance;

	std::cout << "2. Number of instances = " << Sample::getNbInst() << std::endl;
	f0();
}

int main(void)
{
	std::cout << "3. Number of instances = " << Sample::getNbInst() << std::endl;
	f1();
	std::cout << "4. Number of instances = " << Sample::getNbInst() << std::endl;
}
