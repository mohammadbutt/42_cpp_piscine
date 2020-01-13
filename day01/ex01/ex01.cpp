/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 14:30:21 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/13 14:58:10 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

/*
** *panthere string is first filled with zeros and then deleted so deleted
** string cannot be extracted.
*/

/*
** To test if delete was succesful or not run:
** leaks ./a.out
*/

void memoryLeak(void)
{
	std:: string* panthere = new std::string("String panthere");
	std::cout << *panthere << std::endl;
	std::memset(panthere, 0, sizeof(*panthere));
	delete panthere;
//	std::cout << *panthere << std::endl;
}



int main(void)
{
	memoryLeak();
//	while(1);
}
