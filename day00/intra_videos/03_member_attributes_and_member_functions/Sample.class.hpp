/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 18:46:05 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/07 19:32:21 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

/*
A member attribute is a variable inside a class, that we use from an instance.
We will have a foo variable that is different in each instance of class Sample.

We can also declare a member function, in this case the member function is
called bar. A function in a class that we will be able to use from the instance
of our class called Sample.

In c++ we can directly declare a function inside a class.
*/

/*
Constructor - First function that's run when an object is created. It does all
of the initialization.

Destructor - Function that's run when an object is deleted or removed. That's the
function where we would remove all reference to pointer, delete other objects.
One word, cleanup.
*/
class Sample
{
	public:
		int foo;

		Sample(void);
		~Sample(void);

		void bar(void);
};

#endif
