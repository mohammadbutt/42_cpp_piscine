/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 22:48:05 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/20 22:48:37 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int main(int argc, char *argv[])
{
	Conversion usage;
	if(argc != 2)
		usage.ftExit();
	Conversion convert(argv[1]);
/*
	Conversion convert;
	Conversion convert01("Test this");
	Conversion convert02("123");
	Conversion convert03("123.345");
	Conversion convert04("123.345f");
	Conversion convert05("0");
	Conversion convert06("126");
	Conversion convert07("127");
	Conversion convert08("-inff");
	Conversion convert09("+inff");
	Conversion convert10("+nanf");
	Conversion convert11("-inf");
	Conversion convert12("+inf");
	Conversion convert13("+nan");
	Conversion convert14("nan");
	Conversion convert15("-nan");
*/
}
