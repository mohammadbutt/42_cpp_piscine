/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 18:06:49 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/11 16:39:26 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void)
{
	std::cout << "Constructor called" << std::endl;
	return; // return is not required. Think of it as a void function in C
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return; // return is not required. Think of it as a void function in C
}
