/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 16:16:19 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/08 18:49:31 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(int v): _foo(v)
{
	std::cout << "Constructor called" << std::endl;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
}

int Sample::getFoo(void) const
{
	return(this->_foo);
}

int Sample::compare(Sample *other) const
{


	if(this->_foo < other->getFoo())
		return(-1);
	else if(this->_foo > other->getFoo())
		return(1);

/*
	if(this->_foo < other->_foo)
		return(-1);
	else if(this->_foo > other->_foo)
		return(1);
*/	
	return(0);
}
