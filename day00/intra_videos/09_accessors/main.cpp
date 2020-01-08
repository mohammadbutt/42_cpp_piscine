/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 13:31:22 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/08 15:10:28 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int main(void)
{
	Sample instance;
	std::cout << std::endl;

	instance.setFoo(42);
	std::cout << "instance.getFoo() = " << instance.getFoo() << std::endl;

	instance.setFoo(-42);
	std::cout << "instance.getFoo() = " << instance.getFoo() << std::endl;
}
