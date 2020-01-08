/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 13:08:15 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/08 15:10:24 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

/*
get - get the value of an attribute
set - set the value of an attribute

We dont want the user to be able to access _foo attribute because it's private,
but we want the user to have certain access so we can _foo value and then do
anything we want to do with it.

A "get" may only access in readonly mode, which is why we make it const. And it
wont alter the contents of the class.

setFoo - Takes a parameter value from the user, user value can be assigned to
the private attribut called _foo.

setFoo - Takes a value from the user and changes private attribute called _foo.
getFoo - Grants readonly access to private attribute called _foo. _foo is returned

*/

class Sample
{
	public:
		Sample(void);
		~Sample(void);
		
		int		getFoo(void) const;
		void	setFoo(int v);

	private:
		int _foo;
};

#endif
