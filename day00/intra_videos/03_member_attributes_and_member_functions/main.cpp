/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 19:11:10 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/07 19:32:14 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

/*
instance is a stack variable, not a pointer, so we use:
instance.foo and instance.bar();

if instance was a  pointer variable then we would use the below:
instance->foo and instance->bar();

Syntax is similar to structs in C
*/

/*
To compile:

clang++ main.cpp Sample.class.cpp
*/

int main(void)
{
	Sample instance;
	instance.foo = 42;

	std::cout << "instance.foo: " << instance.foo << std::endl;

	instance.bar();

	return(0);
}
