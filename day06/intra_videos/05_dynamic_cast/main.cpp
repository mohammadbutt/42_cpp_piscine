/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 15:46:25 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/20 16:40:52 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Dynamic cast is the only cast that happens at runtime. What that means is
** all dynamic casts happen during compilation. Compiler will do casting. Since
** it happens at runtime, sometimes it works, other times it doesnt.
** A program may compile, but the dynamic cast may fail at runtime.
** It will only work with polymorphic instance. We will be dealing with subtype
** polymorphism. At least, one of the member functions of the class has to be
** virtual.
*/

#include <iostream>
#include <typeinfo>
#include <exception>

class Parent
{
	public:
		virtual ~Parent(void);
};

class Child1: public Parent
{

};

class Child2: public Parent
{

};

Parent::~Parent(void)
{

}

int main(void)
{
	Child1 a;		// Reference value
	Parent *b = &a;	// Implicit upcast -> ok

	// Explicit downcast
	// dynamic_cast using a pointer *


	Child1 *c = dynamic_cast<Child1 *>(b);
	if(c == NULL)
		std::cout << "Conversion if NOT ok" << std::endl;
	else
		std::cout << "Conversion is ok" << std::endl;


	// Explicit downcast
	// dynamic_cast using a reference &
	// If we are dealing with a reference with cannot return a NULL pointer, so we
	// can use st::bad_cast to catch the bad cast
	try
	{
		Child2 &d = dynamic_cast<Child2 &>(*b);
		std::cout << "Conversion is ok" << std::endl;
	}
	catch(std::bad_cast &bc)
	{
		std::cout << "Conversion is NOT ok: " << bc.what() << std::endl;
		return(0);
	}

}
