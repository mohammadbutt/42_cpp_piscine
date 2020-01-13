/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 19:32:28 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/13 14:12:19 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string ponyName) : _ponyName(ponyName)
{
	const char *str1 = "Pony from ";
	const char *str2 = " is alive";
	std::cout << str1 << this-> _ponyName << str2 << std::endl;
}

Pony::~Pony(void)
{
	const char *str1 = "Pony from ";
	const char *str2 = " went to sleep.";
	std::cout << str1 << this->_ponyName << str2 << std::endl;
}

void Pony::ponyOnTheHeap(std:: string ponyName)
{
	Pony *heapPony;
	heapPony = new Pony(ponyName);
	delete heapPony; // Heap Pony is deleted.
}

void Pony::ponyOnTheStack(std:: string ponyName)
{
	Pony stackPony = Pony(ponyName);
	return; // Stack Pony is deleted
}

/*
int main(void)
{
	ponyOnTheHeap("Heap");
	std::cout << std::endl;
	ponyOnTheStack("Stack");
}
*/
