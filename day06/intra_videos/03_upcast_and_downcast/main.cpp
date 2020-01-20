/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 14:23:53 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/20 14:51:36 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*
** upcasts and downcasts in c++
*/

class Parent
{

};

class Child1: public Parent
{

};

class Child2: public Parent
{

};

int main(void)
{
	Child1	a;					// Reference Value

	Parent	*b = &a;			// Implicit 'reinterpretation' cast
	Parent	*c = (Parent *) &a;	// Explicit 'reinterpretation' cast

	Parent	*d = &a;			// Implicit upcast		-> ok
	Child1	*e = d;				// Implicit downcast	-> Not possible
	Child2	*f = (Child2 *) d;	// Explicit downcast	-> ok
}
