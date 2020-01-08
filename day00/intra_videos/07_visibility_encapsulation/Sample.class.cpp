/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 11:40:54 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/08 12:13:34 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void)
{
	std::cout << "Constructor called" << std::endl;

	this->publicFoo = 0;
	std::cout << "this->publicFoo = " << this->publicFoo << std::endl;
	this->_privateFoo = 0;
	std::cout << "this->_privateFoo = " << this->_privateFoo << std::endl;

	this->publicBar();
	this->_privateBar();
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
}

void Sample::publicBar(void) const
{
	std::cout << "Member function publicBar called" << std::endl;
}

void Sample::_privateBar(void) const
{
	std::cout << "Member function _privateBar called" << std::endl;
}
