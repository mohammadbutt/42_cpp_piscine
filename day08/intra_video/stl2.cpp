/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stl2.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 22:09:20 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/21 22:17:59 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <list>

void displayInt(int i)
{
	std::cout << i << std::endl;
}

int main(void)
{
	std::list<int>	lst;

	lst.push_back(10);
	lst.push_back(23);
	lst.push_back(3);
	lst.push_back(17);
	lst.push_back(20);
	
	for_each(lst.begin(), lst.end(), displayInt);

	return(0);
}
