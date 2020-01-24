/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 21:18:22 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/23 21:18:35 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

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
