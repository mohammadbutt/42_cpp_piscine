/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 13:14:59 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/24 13:21:07 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int main(void)
{
	MutantStack<int> mstack;

	mstack.push(9);
	mstack.push(17);

	std::cout << "mstack.top(): " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "mstaxk.size(): " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator itBegin = mstack.begin();
	MutantStack<int>::iterator itEnd = mstack.end();

	++itBegin;
	--itBegin;

	while(itBegin != itEnd)
	{
		std::cout << *itBegin << std::endl;
		++itBegin;
	}
	std::stack<int> s(mstack);
	return(0);
}
