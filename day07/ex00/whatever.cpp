/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 18:41:42 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/21 19:23:59 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename universalDataT>

void swap(universalDataT &a, universalDataT &b)
{
	universalDataT temp;
	temp = a;
	a = b;
	b = temp;
}

template <typename universalDataT>

universalDataT &min(universalDataT &a, universalDataT &b)
{
	if(a <= b)
		return(a);
	return(b);
}

template <typename universalDataT>
universalDataT &max(universalDataT &a, universalDataT &b)
{
	if(a >= b)
		return(a);
	return(b);
}

int main(void)
{
	int			a = 2;
	int			b = 3;
	std::string	c = "chaine1";
	std::string	d = "chaine2";
	int			e = 1;
	int			f = 2;
	float		g = 42.57;
	float		h = 14.56;
	double		i = 15.87;
	double		j = 18.78;
	const char	*k = "String 1";
	const char	*l = "String 2";
	std::string m = "String 1";
	std::string n = "String 2";

	::swap(a, b);

	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl; // Implicit instanciation
	std::cout << "max( a, b ) = " << ::max<int>( a, b ) << std::endl; // Explicit instanciation
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl; // Implicit instaciation
	std::cout << "max( c, d ) = " << ::max<std::string>( c, d ) << std::endl; // Explicit instanciation
	
	std::cout << std::endl;
	std::cout << "-------------Running personal tests-----------" << std::endl;
	std::cout << "Before swap int: " << std::endl;
	std::cout << "e =  " << e << ", f = " << f << std::endl;	
	std::cout << "After swap int: " << std::endl;
	swap(e, f);
	std::cout << "e =  " << e << ", f = " << f << std::endl << std::endl;


	std::cout << "Before swap float: " << std::endl;
	std::cout << "g =  " << g << ", h = " << h << std::endl;	
	std::cout << "After swap float: " << std::endl;
	swap(g, h);
	std::cout << "g =  " << g << ", h = " << h << std::endl << std::endl;


	std::cout << "Before swap double: " << std::endl;
	std::cout << "i =  " << i << ", j = " << j << std::endl;	
	std::cout << "After swap double: " << std::endl;
	swap(i, j);
	std::cout << "i =  " << i << ", j = " << j << std::endl << std::endl;


	std::cout << "Before swap const char *str: " << std::endl;
	std::cout << "k =  " << k << ", l = " << l << std::endl;	
	std::cout << "After swap const char *str: " << std::endl;
	swap(k, l);
	std::cout << "k =  " << k << ", l = " << l << std::endl << std::endl;


	std::cout << "Before swap std::string: " << std::endl;
	std::cout << "m =  " << m << ", n = " << n << std::endl;	
	std::cout << "After swap std::string: " << std::endl;
	swap(m, n);
	std::cout << "m =  " << m << ", n = " << n << std::endl << std::endl;
}
