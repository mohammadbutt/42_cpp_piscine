/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 14:13:39 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/23 21:20:33 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

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
	
		std::vector<int> vectorCopy;
		void addNumber(int number);
		void addNumberStack(std::vector<int> numberArray);
		long shortestSpan(void);
		long longestSpan(void);
		int getVector(int vectorElemenet);
		int getVectorSize(void);
	private:
		unsigned int _vectorElements;
		std::vector<int> _vector;
};

void addToSpan1(Span &span1);
void addToSpan2(Span &span2);
void addToSpanTenK(std::vector<int> vectorTenK, Span &span);
void printAllVectorElements(Span &span);
void printLongAndShortSpan(Span &span);
void printLongAndShortSpan1000(Span &span);

#endif
