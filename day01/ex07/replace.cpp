/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 17:40:01 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/15 18:54:18 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void usage(void)
{
	const char *line1 = "usage:";
	const char *line2 = "./replace testfile old_word new_word outputFileName";
	const char *line3 = "Exiting program";

	std::cout << line1 << std::endl  << line2 << std::endl;
	std::cout << line3 << std::endl;
}

int main(int argc, char *argv[])
{	
	if(argc != 4)
	{
		usage();
		return(1);
	}
	size_t position = 0;
	std::string fileName = argv[1];
	std::string oldStr = argv[2];
	std::string newStr = argv[3];
	std::string subject;
	std::ifstream opennedFile(fileName);
	std::ofstream savedFile(fileName + ".output");
	if(savedFile == NULL)
	{
		std::cout << "Unable to save file. Exiting program" << std::endl;
		return(1);
	}
	while(std::getline(opennedFile, subject))
	{

		position = subject.find(oldStr);
		if(position == 0)
		{
			usage();
			return(1);
		}
		while((position = subject.find(oldStr, position)) != std::string::npos)
		{
			subject.replace(position, oldStr.length(), newStr);
			position = position + newStr.length();
		}
		savedFile << subject << std::endl;
	}
}
