/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample2.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 12:26:54 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/08 13:04:42 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE2_CLASS_H
# define SAMPLE2_CLASS_H

/*
Structures and classes work the same exact way in c++, bu there is a major
difference:

Structs by default are public
Classes by default are private
*/

class Sample2
{
//	public:

		int foo;

		Sample2(void);
		~Sample2(void);
	
		void bar(void) const;
};

#endif
