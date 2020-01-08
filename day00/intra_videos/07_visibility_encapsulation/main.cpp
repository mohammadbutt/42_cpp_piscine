/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 11:56:53 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/08 12:13:40 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int main(void)
{
	Sample instance;

	instance.publicFoo = 42;
	std::cout << "instance.publicFoo = " << instance.publicFoo << std::endl;
	instance.publicBar();

/*	
// Below will not print because these are private
	instance._privateFoo = 456;
	std::cout << "instance._privateFoo = " << instance._privateFoo << std::endl;
	instance._privateBar();

*/
}
