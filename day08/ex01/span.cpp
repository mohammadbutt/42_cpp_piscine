/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 14:24:16 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/23 17:06:43 by mbutt            ###   ########.fr       */
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
	
	std::vector<int>vectorCopy = this->_vector;
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

int main(void)
{
	Span span = Span(10);
	
//	span.addNumber(0);
//	span.addNumber(100);
//	span.addNumber(150);
//	span.addNumber(180);
//	span.addNumber(190);
//	span.addNumber(195);

	int num1 = INT_MIN;	
	int num2 = INT_MAX;
	
//	int num1 = - 10;
//	int num2 = 10;

//	std::cout << "num1: " << num1 << std::endl;
	span.addNumber(num1);
	span.addNumber(num2);
	std::cout << span.shortestSpan() << std::endl;

//	span.span();
}
