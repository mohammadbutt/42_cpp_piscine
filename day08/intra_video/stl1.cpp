/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stl1.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 21:53:17 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/21 22:25:25 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <map>
#include <vector>
#include <list>

class IOperation;

int main(void)
{
	std::list<int>						lst1;
	std::map<std::string, IOperation*>	map1;
	std::vector<int>					v1;
	std::vector<int>					v2(42, 100);

	lst1.push_back(1);
	lst1.push_back(17);
	lst1.push_back(42);

//	map1["opA"] = new OperationA;
//	map1["opB"] = new OperationB;

	std::list<int>::const_iterator		itBegin;
	std::list<int>::const_iterator		itEnd;

	itBegin = lst1.begin();
	itEnd = lst1.end();

	while(itBegin != itEnd)
		std::cout << *itBegin++ << std::endl;
}
