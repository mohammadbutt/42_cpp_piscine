/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 12:57:40 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/21 15:37:48 by mbutt            ###   ########.fr       */
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

struct Data
{
	int n;
	std::string s1;
	std::string s2;
};

struct Data2
{
	int n;
	std::string s0;
	std::string s1;
	std::string s2;	
};

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

void *serialize(void)
{
	Data	*info	= new(Data);
	char	str1[9]	= {0};
	char	str2[9]	= {0};
	int		randomN	= 0;

	randomAlphaNumericString(str1);
	randomAlphaNumericString(str2);
	randomN = generateRandomNumber(0, 100);

	info->s1 = str1;
	info->s2 = str2;
	info->n = randomN; 

	std::cout << "---------Serialization---------" << std::endl;
	std::cout << "s1: " << info->s1 << std::endl;
	std::cout << "s2: " << info->s2 << std::endl;
	std::cout << "n: " << info->n << std::endl;
	return(reinterpret_cast<void *>(info));
}

Data *deserialize(void *raw)
{
	return(reinterpret_cast<Data *>(raw));
}


Data2 *deserialize2(void *raw)
{
	return(reinterpret_cast<Data2 *>(raw));
}

void printDeserialize(Data *info)
{
	std::cout << "--------Deserialization--------" << std::endl;
	std::cout << "s1: " << info->s1 << std::endl;
	std::cout << "s2: " << info->s2 << std::endl;
	std::cout << "n: " << info->n << std::endl;
}

void printDeserialize2(Data2 *info)
{
	std::cout << "--------Deserialization2-------" << std::endl;
	std::cout << "s0: " << info->s0 << std::endl;
	std::cout << "s1: " << info->s1 << std::endl;	
	std::cout << "s2: " << info->s2 << std::endl;
	std::cout << "n: " << info->n << std::endl;
}

int main(void)
{
	void	*serialData;
	Data	*deserialData;
	Data2	*deserialData2;

	serialData = serialize();
	deserialData = deserialize(serialData);
	deserialData2 = deserialize2(serialData);

	printDeserialize(deserialData);
	printDeserialize2(deserialData2);
}
