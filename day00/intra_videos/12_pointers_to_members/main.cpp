/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 21:46:05 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/09 19:14:51 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

/*
We will create a variable called *p, and a function called *f

*p is used to overwrite the value of foo. foo variable is a member of class Sample.
*f is used to call function bar. bar function is a member of class Sample.

This exercise pretty demonstrates how one can create pointers to change values of
a pointer or to call a function.
*/

int main(void)
{
	Sample instance;
	Sample *instancepointer = &instance;

	int		Sample::*p = NULL;
	void	(Sample::*f)(void) const;

	p = &Sample::foo;

	std::cout << "Value of member foo = " << instance.foo << std::endl;
	
	instance.*p = 21;
	std::cout << "Value of member foo = " << instance.foo << std::endl;

	instancepointer->*p = 42;
	std::cout << "Value of member foo = " << instance.foo << std::endl;

	f = &Sample::bar;
	(instance.*f)();
	(instancepointer->*f)();

}
