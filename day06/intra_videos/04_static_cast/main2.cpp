/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 15:16:16 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/20 15:44:13 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*
** static_cast is the simplest type of casting. It allows us to make simple
** conversions between direct values
** static_cast allows us to upcast and downcast. It prevents casting between
** unrelated class hierarchies.
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

class Unrelated
{

};

int main(void)
{
	Child1	a;		// Reference value

	Parent 	*b = &a;						// Implicit upcast		-> ok
	Child1 	*c = b;							// Implicit downcast	-> Not possible
	Child2 	*d = static_cast<Child2 *>(b);	//Explicit downcast		->Ok, will try

	Unrelated *e = static_cast<Unrelated *>(&a); // Explicit conversion -> No

}
