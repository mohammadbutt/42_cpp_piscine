/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 14:55:19 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/20 15:16:06 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
**	Different types of casts:
**	1. Conversions
**	2. Reinterpretations
**	3. Typequalifier changes
**	4. Downcasts
**	5. Upcasts
**
**	static_cast: static_cast is a c++ cast to convert simple values
*/

int main(void)
{
	int		a = 42;						// Refernce value

	double	b = a;						// Implicit promotion	->	ok
	int		c = b;						// Implicit demotion	->	Not Possible
	int		d = static_cast<int>(b);	// Explicit demotion	->	Ok, will try
	return(0);
}

/*
**	Compile with:
**	g++ -Wconversion main.cpp
*/

/*
** How the static cast on line 32 is read:
** I want to make a "static_cast" of <int type> for (variable b).
** Not that originally variable b originally was of type double on line 30.
*/
