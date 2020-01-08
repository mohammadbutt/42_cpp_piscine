/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 20:41:26 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/07 21:23:44 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample1.class.hpp"

Sample1::Sample1(char p1, int p2, float p3)
{
	std::cout << "Construcotr called from Class Sample1" << std::endl;
	std::cout << "Class Sample1 is not a good way to initialize" << std::endl;

	this->a1 = p1;
	std::cout << "this->a1 = " << this->a1 << std::endl;
	

	this->a2 = p2;
	std::cout << "this->a2 = " << this->a2 << std::endl;

	this->a3 = p3;
	std::cout << "this->a3 = " << this->a3 << std::endl;
}

Sample1::~Sample1(void)
{
	std::cout << "Destructor called." << std::endl;
}
