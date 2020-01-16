/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 17:40:01 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/15 18:10:53 by mbutt            ###   ########.fr       */
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
	if(argc != 5)
	{
		usage();
		return(1);
	}
	std::string fileName = argv[1];
	std::string oldStr = argv[2];
	std::string newStr = argv[3];
	std::ifstream opennedFile(fileName);
	std::ofstream savedFile(fileName + ".output");
	
//	std::cout << fileName << std::endl;
//	std::cout << oldStr << std::endl;
//	std::cout << newStr << std::endl;

}
