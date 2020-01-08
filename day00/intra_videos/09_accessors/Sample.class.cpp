/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 13:15:50 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/08 15:10:35 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void)
{
	std::cout << "Constructor called" << std::endl;

	this->setFoo(0);
	std::cout << "this->getFoo() " << this->getFoo() << std::endl;
}

Sample:: ~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
}

int Sample::getFoo(void) const
{
	return(this->_foo);
}

void Sample::setFoo(int v)
{
	if(v >= 0)
		this->_foo = v;
	return;
}
