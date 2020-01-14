/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 13:58:13 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/13 15:52:33 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"


void ponyOnTheHeap(std:: string ponyName)
{
	Pony *heapPony;
	heapPony = new Pony(ponyName);
	delete heapPony; // Heap Pony is deleted.
}
 
void ponyOnTheStack(std:: string ponyName)
{
	Pony stackPony = Pony(ponyName);
	return; // Stack Pony is deleted
}


int main(void)
{
	ponyOnTheHeap("Heap");
	std::cout << std::endl;
	ponyOnTheStack("Stack");
}

