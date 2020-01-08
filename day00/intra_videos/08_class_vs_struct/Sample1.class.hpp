/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 12:22:44 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/08 13:04:54 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE1_CLASS_H
# define SAMPLE1_CLASS_H

/*
Structures and classes work the same exact way in c++, but there is a major
difference:

Structs by default are public scope
Classes by default are private scope
*/

struct Sample1
{
	int foo;

	Sample1(void);
	~Sample1(void);

	void bar(void) const;
};

#endif
