/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 19:47:27 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/21 20:17:04 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>


template <typename T, typename F>
void iter(T *address, int lengthOfArray, F functionToArray)
{
	int i = 0;
	while(i < lengthOfArray)
		functionToArray(address[i++]);
	std::cout << std::endl;
}

template <typename T>
void printData(T &a)
{
	std::cout << "output is: " << a << std::endl;
}

int main(void)
{
	int			n = 3;
	int			a[] = {1, 2, 3};
	float		b[] = {1.1f, 1.2f, 1.3f};
	double		c[] = {2.1, 2.2, 2.3};
	const char	*d[] = {"abc", "def", "ghi"};
	std::string	e[] = {"abc", "def", "ghi"};
	
	std::cout << "int:" << std::endl;
	iter<int>(a, n, printData<int>);

	std::cout << "float:" << std::endl;
	iter<float>(b, n, printData<float>);

	std::cout << "double:" << std::endl;
	iter<double>(c, n, printData<double>);

	std::cout << "const char *:" << std::endl;
	iter<const char *>(d, n, printData<const char *>);

	std::cout << "std::string: " << std::endl;
	iter<std::string>(e, n, printData<std::string>);
}
