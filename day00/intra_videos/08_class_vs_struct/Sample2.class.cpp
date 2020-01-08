/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample2.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 12:46:14 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/08 13:04:46 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample2.class.hpp"

Sample2::Sample2(void)
{
	std::cout << "Constructor called through class" << std::endl;

	this->foo = 45;
	std::cout << "this->foo = " << this->foo << std::endl;

	this->bar();
}

Sample2::~Sample2(void)
{
	std::cout << "Destructor called through class" << std::endl;
}

void Sample2::bar(void) const
{
	std::cout << "Member function bar called through class" << std::endl;
}
