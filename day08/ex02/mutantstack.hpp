/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 21:39:29 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/24 13:14:46 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <iterator>
#include <stack>
#include <deque>

/*
** Reference:
** en.cppreference.com/w/cpp/container/stack
** www.cplusplus.com/reference/deque/deque/				
** www.cplusplus.com/reference/stack/stack/
**
** stack class inherits class container that is deque. Deque has iterator, so
** through stack class, we go through deque to access iterator.
** stack->deque->iterator
**
** When do the following:
** typedef typename std::stack<T>::container_type::iterator iterator;
** we set the alias/typedef of "std::stack<T>::container_type::iterator" to  "iterator";
*/

template <typename T>

class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void); // Default Constructor - Canonical
		MutantStack(const MutantStack &srcCopy) // Copy Constructor - Canonical
		{
			*this = srcCopy;
		}
		MutantStack &operator = (const MutantStack &rhs) // Assignment - Canonical
		{
			if(this != &rhs)
				std::stack<T>::operator = (rhs);
			return(rhs);
		}
		~MutantStack(void);	// Default destructor - Canonical

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin()
		{
			return(std::begin(std::stack<T>::c));
		}
		iterator end()
		{
			return(std::end(std::stack<T>::c));
		}
};

#endif
