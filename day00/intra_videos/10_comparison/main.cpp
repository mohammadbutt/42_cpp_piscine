/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 17:47:50 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/08 18:49:00 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

/*
instance1 and instance2 will not have the same address, but they will have the
content.
*/

int main()
{
	Sample instance1(42);
	Sample instance2(42);

	if(&instance1 == &instance1)
		std::cout << "0. instance1 and instance1 are physically equal" << std::endl;
	else
		std::cout << "1. instance1 and instance1 are not physically equa" << std::endl;

	if(&instance1 == &instance2)
		std::cout << "2. instance1 and instance2 are physically equal" << std::endl;
	else
		std::cout << "3. instance1 and instance2 are not physically equal" << std::endl;

	// Let's use the compare function
	std::cout << std::endl << "Using compare function to compare instances now";
	std::cout << std::endl << std::endl;
	if(instance1.compare(&instance1) == 0)
		std::cout << "4. instance1 and instance1 are structurally equal" << std::endl;
	else
		std::cout << "5. instance1 and instance1 are not structurally equal" << std::endl;

	if(instance1.compare(&instance2) == 0)
		std::cout << "6. instance1 and instance2 are structurally equal" << std::endl;
	else
		std::cout << "7. instance1 and instance2 are not structurally equal" << std::endl;
}
