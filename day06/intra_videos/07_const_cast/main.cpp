/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 17:10:12 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/20 18:03:34 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** const_cast - Can cast a const data type to a regular data type.
** should be avoided
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a = 42;						// Reference Value

	int const *b = &a;				// Implicit promotion	-> ok
//	int *c = b;						// Implicit demotion 	-> Not possible
	int *d = const_cast<int *>(b);	// Explicit demotion	-> Ok, will try

	std::cout << *d << std::endl;
	return(0);
}
