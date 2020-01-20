/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 13:52:07 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/20 14:09:26 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int a = 42;

	int const *b = &a;
	int const *c = (int const *) &a;

	int const *d = &a;	// Implicit promotion	-> ok
//	int *e = d;			// Implicit demotion 	-> No
	int *f = (int *) d;	// Explicit demotion	-> ok
}
