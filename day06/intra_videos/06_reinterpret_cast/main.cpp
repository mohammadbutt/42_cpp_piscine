/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 16:46:44 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/20 17:06:24 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** reinterpret_cast - reinterpret cast will cast unlike other type casts that
** will warn you. One has to be careful when using reinterpret_cast because
** it will do exactly what you tell it to even if the thing that you ask it do
** is not allowed.
** 
** reinterpret_cast will compile the program, but there will be problems at runtime
** if the data types or classes were not copmatible.
*/

#include <stdio.h>
#include <iostream>

int main(void)
{
	float	a	= 420.042f;						// Reference value

	void	*b	= &a;							// Implicit promotion -> ok
	int		*c	= reinterpret_cast<int *>(b);	// Explicit demotion  -> ok, will try
	int		&d	= reinterpret_cast<int &>(b);	// Explicit demotion  -> ok, will try
	
	printf("%f\n", a);
	printf("%d\n", *c);
	printf("%d\n\n", d);

	std::cout << a << std::endl;
	std::cout << *c << std::endl;
	std::cout << d << std::endl;

	int e = static_cast<int>(a);

	std::cout << e << std::endl;
}
