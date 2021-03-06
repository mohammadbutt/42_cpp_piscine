/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 13:17:52 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/20 13:50:25 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	float a = 420.042f;		// Reference value

	void *b = &a;			// Implicit reinterpretation cast
	void *c = (void *) &a;	// Explicit reinterpretation cast

	void *d = &a;			// Implicit promotion	-> ok
	int *e = d;				// Implicit demotion	-> Hazardous
	int *f = (int *) d;		// Explicit demotion	-> ok, I obey

	printf(" %p, %f\n", &a, a);

	printf(" %p\n", b);
	printf(" %p\n", c);

	printf(" %p\n", d);
	printf(" %p, %d\n", e, *e);
	printf(" %p, %d\n", f, *f);
}

/*
** Note for line 23:
** int *e = d
** If the file extension is cpp then we will get the error message:
** cannot initialize a variable of type 'int *' with an lvalue
** of type 'void *'
**      int *e = d;                             // Implicit demotion
**           ^   ~
*/
