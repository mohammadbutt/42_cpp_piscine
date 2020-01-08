/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample2.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 20:54:21 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/07 21:23:48 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample2.class.hpp"

/*
This syntax of setting p1 equal to a1, p2 equal to a2, and p3 equal to a3 is
called initializtion list.
*/

Sample2::Sample2(char p1, int p2, float p3) : a1(p1), a2(p2), a3(p3)
{
	std::cout << "Constructor called from Class Sample2" << std::endl;
	std::cout << "Class Sample2 is the ideal way to initialize" << std::endl;
	std::cout << "this->a1 = " << this->a1 << std::endl;
	std::cout << "this->a2 = " << this->a2 << std::endl;
	std::cout << "this->a3 = " << this->a3 << std::endl;

}

Sample2::~Sample2(void)
{
	std::cout << "Destructor called." << std::endl;
}
