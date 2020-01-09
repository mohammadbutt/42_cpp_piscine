/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 21:05:03 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/08 21:25:00 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

/*
When we are referring to a member attribute or function we will use "this->",
but when we are referring to a non-member attribute or function, we will use
"Classname::" in this case, "Sample::"
*/

Sample::Sample(void)
{
	std::cout << "Constructor called" << std::endl;
	Sample::_nbInst += 1;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	Sample::_nbInst -= 1;
}

int Sample::getNbInst(void)
{
	return(Sample::_nbInst);
}

int Sample::_nbInst = 0;

/*
int Sample::_nbInst = 0;
Above is the only way to initialize a non-member static attribute
*/
