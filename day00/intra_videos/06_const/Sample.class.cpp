/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 21:32:18 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/07 22:09:23 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(float const f) : pi(f), qd(42)
{
	std::cout << "Constructor called." << std::endl;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called." << std::endl;
}

void Sample::bar(void) const
{
	std::cout << "this->pi = " << this->pi << std::endl;
	std::cout << "this->qd = " << this->qd << std::endl;
}
