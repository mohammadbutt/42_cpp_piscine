/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 14:24:16 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/23 21:19:03 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(void)
{
	// Default constructor
	std::cout << "Calling default constructor" << std::endl;
}
Span::Span(const Span &srcCopy)
{
	*this = srcCopy;
}

Span &Span::operator = (const Span &rhs)
{
	if(this != &rhs)
	{
		this->_vectorElements = rhs._vectorElements;
		this->_vector = rhs._vector;
		*this = rhs;
	}
	return(*this);
}

Span::~Span(void)
{
	// Default destructor
}

Span::Span(unsigned int vectorElements)
{
	_vectorElements = vectorElements;
	this->_vector.reserve(_vectorElements);
}

void Span::addNumber(int number)
{
	if(_vector.size() == _vectorElements)
		throw(std::exception());
	_vector.push_back(number);
}

long Span::shortestSpan(void)
{
	if(_vector.size() <= 1)
		throw(std::exception());	
	int long shortestSpan = LONG_MAX;
	int long difference = 0;
	int long leftNumber = 0;
	int long rightNumber = 0;
	int i = 0;
	
	this->vectorCopy = this->_vector;
	std::sort(vectorCopy.begin(), vectorCopy.end());	
	while(i < (vectorCopy.size() - 1) )
	{
		leftNumber = static_cast<long>(vectorCopy[i]);
		rightNumber = static_cast<long>(vectorCopy[i + 1]);
		difference = std::labs(leftNumber - rightNumber);
		if(difference < shortestSpan)
			shortestSpan = difference;
		i++;
	}
	return(shortestSpan);
}

long Span::longestSpan(void)
{
	if(_vector.size() <= 1)
		throw(std::exception());
	int i = 0;
	int long min = INT_MAX;
	int long max = INT_MIN;

	std::vector<int>::iterator itBegin;
	std::vector<int>::iterator itEnd;
	
	itBegin = _vector.begin();
	itEnd = _vector.end();
	while(itBegin != itEnd)
	{
		if(*itBegin < min)
			min = *itBegin;
		if(*itBegin > max)
			max = *itBegin;
		itBegin++;
	}
	return(max - min);
}

int Span::getVector(int vectorElement)
{
	return(this->vectorCopy[vectorElement]);
}

int Span::getVectorSize(void)
{
	return(_vector.size());
}

void Span::addNumberStack(std::vector<int> vectorTenK)
{
	if(_vector.size() == vectorTenK.size())
		throw(std::exception());
	_vector.insert(_vector.begin(), vectorTenK.begin(), vectorTenK.end());
}

void addToSpan1(Span &span1)
{
	try
	{
		span1.addNumber(0);
		span1.addNumber(100);
		span1.addNumber(150);
		span1.addNumber(180);
		span1.addNumber(190);
		span1.addNumber(195);
	}
	catch(std::exception &e)
	{
		std::cout << "Number out of bound " << e.what() << std::endl;
	}
}
void addToSpan2(Span &span2)
{
	try
	{
		span2.addNumber(INT_MIN);
		span2.addNumber(INT_MAX);
	}
	catch(std::exception &e)
	{
		std::cout << "Number out of bound " << e.what() << std::endl;
	}
}

void addToSpanTenK(std::vector<int> vectorTenK, Span &span)
{
	int i = 0;
	while(i <= 10000)
		vectorTenK.push_back(i++);
	try
	{
		span.addNumberStack(vectorTenK);
	}
	catch(std::exception &e)
	{
		std::cout << "Number out of bound " << e.what() << std::endl;
	}
}

void printLongAndShortSpan(Span &span1)
{
	unsigned int shortestSpan = 0;
	unsigned int longestSpan = 0;
	try
	{
		shortestSpan = span1.shortestSpan();
		longestSpan = span1.longestSpan();
		std::cout << "ShortestSpan is " << shortestSpan;
		std::cout << " and LongestSpan is " << longestSpan;
		std::cout << " from following numbers: " << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "Numbers out of bound" << e.what() << std::endl;
	}

}

void printLongAndShortSpan1000(Span &span1)
{
	unsigned int shortestSpan = 0;
	unsigned int longestSpan = 0;
	try
	{
		shortestSpan = span1.shortestSpan();
		longestSpan = span1.longestSpan();
		std::cout << "ShortestSpan is " << shortestSpan;
		std::cout << " and LongestSpan is " << longestSpan;
		std::cout << " for numbers from 0 to 10000" << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "Numbers out of bound" << e.what() << std::endl;
	}

}
void printAllVectorElements(Span &span)
{
	int i = 0;

	while(i < span.getVectorSize())
	{
		std::cout << span.getVector(i) << std::endl;
		i++;
	}
	std::cout << std::endl;
}

/*
int main(void)
{
	int i = 0;
	Span span1 = Span(8);
	addToSpan1(span1);
	printLongAndShortSpan(span1);
	printAllVectorElements(span1);
	
	Span span2 = Span(2);
	addToSpan2(span2);
	printLongAndShortSpan(span2);
	printAllVectorElements(span2);
	
	std::vector<int> vectorTenK;
	vectorTenK.reserve(10001);

	Span span3 = Span(1);
	addToSpanTenK(vectorTenK, span3);
	printLongAndShortSpan1000(span3);
}
*/
