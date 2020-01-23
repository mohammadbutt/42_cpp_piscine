/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 17:31:23 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/22 19:37:39 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int max(int x, int y)
{
	if(x >= y)
		return(x);
	return(y);
}

/*
** We will now have a universal data type T, that will be able to handle int, float,
** char.
** In order to have that universal data type, we will do the following:
**
** template<typename T>
**
** now T becomes a universal data type that can handle int, float, double, char
**
** We will need declare a new   template<typename T> each time we want to write
** a new function.
*/

template<typename T>

T max1(T x, T y)
{
	if(x >= y)
		return(x);
	return(y);
}

/*
** Instead of using the pointer, we use reference (& ampersand), because it takes
** less memory.
*/

template<typename T>
T &max2(T &x, T &y)
{
	if(x >= y)
		return(x);
	return(y);
}


template<typename T>
const T &max3(const T &x, const T &y)
{
	if(x >= y)
		return(x);
	return(y);
}

int main(void)
{
	int num1 = 123;
	int num2 = 5;
	std::cout << max1<int>(num1, num2) << std::endl; // Explicit instanciation
	std::cout << max1(num1, num2) << std::endl; // Implicit instanciation
	std::cout << max2<int>(num1, num2) << std::endl; // Explicit instantiation
	std::cout << max3(num1, num2) << std::endl;
}
