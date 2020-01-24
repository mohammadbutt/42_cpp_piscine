/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 14:13:39 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/23 17:06:47 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>

class Span
{
	public:
		Span(void); // Default constructor - Canonical
		Span(const Span &srcCopy); // Copy constructor - Canonical
		Span &operator = (const Span &rhs); // assignment operator - Canonical
		~Span(void); // Destructor - Canonical
		Span(unsigned int vectorElements);
		
		void addNumber(int number);
		long shortestSpan(void);
		long longestSpan();
//		Span(std::vector<int> vectorArray); // Not sure where this will be used yet
	private:
		unsigned int _vectorElements;
		std::vector<int> _vector;
};
