/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filestream1.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 18:00:25 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/14 18:27:02 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

/*
We print values just so we know that the program ran.
./a.out creates a "test.out" file with content:
"i like ponnies a whole damn lot"
*/

int main(void)
{
	std::ifstream ifs("numbers");
	unsigned int dst;
	unsigned int dst2;
	dst = 0;
	dst2 = 0;
	ifs >> dst >> dst2;
	std::cout << dst << " " << dst2 << std::endl;
	ifs.close();

	std::ofstream ofs("test.out");
	ofs << "i like ponnies a whole damn lot" << std::endl;
	ofs.close();
}
