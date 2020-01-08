/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 12:40:53 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/08 13:04:58 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample1.class.hpp"

Sample1::Sample1(void)
{
	std::cout << "Constructor called through struct" << std::endl;

	this->foo = 42;
	std::cout << "this->foo = " << this->foo << std::endl;

	this->bar();
}

Sample1::~Sample1(void)
{
	std::cout << "Destructor called through struct" << std::endl;
}

void Sample1::bar(void) const
{
	std::cout << "Member function bar called through struct" << std::endl;
}
