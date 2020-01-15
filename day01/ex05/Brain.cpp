/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 18:17:37 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/14 22:11:46 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::string message;
	message = "Calling Constructor for Brain class";
	std::cout << message << std::endl;
	Brain::setMemoryAddress();
}

Brain::~Brain(void)
{
	std::string message;
	message = "Calling Destructor for Brain class";
	std::cout << message << std::endl;
}

void Brain::setMemoryAddress(void)
{
	std::stringstream buffer;
	buffer << this;
	Brain::_memoryAddress = buffer.str();
	Brain::memoryAddress = buffer.str(); // 1.0
//	this->memoryAddress = buffer.str(); // 1.1
//	memoryAddress = buffer.str();		// 1.2
}
/*
1.0 - memoryAddress variable can be accessed using anyof the below methods:
Brain::memoryAddress
this->memoryAddress
memoryAddress
*/

const std::string Brain::identify(void) const
{
	std::cout << "Brain::identify: ";
	return(this->_memoryAddress);
}

/*
int main(void)
{
	Brain bob;
	std::cout << bob.identify() << std::endl;
}
*/
