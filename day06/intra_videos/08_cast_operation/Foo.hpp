/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Foo.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 18:53:44 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/20 19:21:35 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FOO_HPP
# define FOO_HPP

/*
** cast operator
*/
#include <iostream>

class Foo
{
	public:
		Foo(float const v);

		float getV(void);

		operator float(void);
		operator int(void);
	
	private:
		float _v;
};

# endif
