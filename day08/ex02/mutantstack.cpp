/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 10:34:15 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/24 13:16:07 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

/*
** https://stackoverflow.com/questions/15723850/why-does-this-code-give-the-error-template-specialization-requires-template
*/

template<>
MutantStack<int>::MutantStack(void)
{
	// Default Constructor
	std::cout << "Calling constructor" << std::endl;
	return;
}

template<>
MutantStack<int>::~MutantStack(void)
{
	// Default destructor
	std::cout << "Calling destructor" << std::endl;
	return;
}
