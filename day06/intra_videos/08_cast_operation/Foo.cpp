/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Foo.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 18:54:15 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/20 19:21:28 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Foo.hpp"

Foo::Foo(float const v) : _v(v)
{

}

float Foo::getV(void)
{
	return (this->_v);
}

Foo::operator float(void)
{
	return(this->_v);
}

Foo::operator int(void)
{
	return(static_cast<int>(this->_v));
}

int main(void)
{
	Foo		a(428.024f);
	float	b = a;
	int		c = a;

	std::cout << a.getV() << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;

	return(0);
}
