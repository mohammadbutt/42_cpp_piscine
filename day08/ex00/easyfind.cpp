/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 20:01:50 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/22 21:16:24 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
int easyfind(T &container, int match)
{
	int i = 0;
	typename T::const_iterator itBegin;
	typename T::const_iterator itEnd;

	itBegin = container.begin();
	itEnd = container.end();

	while(itBegin != itEnd)
	{
		if(*itBegin == match)
			return(*itBegin);
		itBegin++;
	}
	throw(std::exception());

}

int main(void)
{
	int 			i = 3;
	const char 		*str = "Number not found because it was not stored. ";
	std::list<int>	lst1;

	while(i <= 6)
		lst1.push_back(i++);
	i = 0;

	while(i <= 9)
	{
		try
		{
			std::cout << easyfind(lst1, i) << std::endl;
		}
		catch(std::exception &e)
		{
			std::cout << str << e.what() << std::endl;
		}
		i++;
	}
}
