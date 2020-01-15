/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 20:04:39 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/14 22:14:01 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include "Brain.hpp"

Human::Human(void)
{
	std::cout << "Calling Constructor Human class" << std::endl;
}

Human::~Human(void)
{
	std::cout << "Calling Destructor Human class" << std::endl;
}

std::string Human::identify(void)
{
	return(this->_brain.identify());
}
const Brain& Human::getBrain(void)
{
	std::cout << "Human::";
	return(this->_brain);
//	return(Human::_brain); 	1. Can also use this
//	return(_brain);			2. Can also use this
}

/*
int main(void)
{
	Human bob;

	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
}
*/
