/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 12:57:40 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/21 14:04:59 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <random>
#include <iostream>

/*
** generateRandomNumber
** randomNumber = (static_cast<unsigned int>(randInstance())) % (difference + 1);
**
** Alternatively replace the above line with the below two lines to use
** functions from uniform_int_distribution class:
**
** std::uniform_int_distribution<>iter(min, max);
** randomNumber = iter(gen);
*/

int generateRandomNumber(int min, int max)
{
	int randomNumber = 0;
	int difference = max - min;
	std::random_device randInstance;
	std::mt19937 gen(randInstance());
	randomNumber = (static_cast<unsigned int>(randInstance())) % (difference + 1);
	return(randomNumber);
}

int ftStrLen(char *str)
{
	int i = 0;
	if(str)
		while(str[i])
			i++;
	return(i);
}

void *randomAlphaNumericString(char *newString)
{
	const char *str =
		"0123456789"
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";
	int i = 0;
	int len = ftStrLen(const_cast<char *>(str)) - 1;
	while(i < 8)
		newString[i++] = str[generateRandomNumber(0, len)];
	newString[i] = '\0';
	return(newString);
}

int main(void)
{
	char str[9];
	std::string str2;

	randomAlphaNumericString(str);
	str2 = str;
	std::cout << str << std::endl;
	std::cout << str2 << std::endl;
}
/*
int main(void)
{
	const char str[] =
		"0123456789"
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";

	printf("%s, %lu\n", str, sizeof(str));
}
*/
