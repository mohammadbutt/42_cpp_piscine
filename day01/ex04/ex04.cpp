/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 14:34:22 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/14 15:20:12 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*
Reference(or ampersand &) dont need to be dereferenced. They already are
deferenced, which is why we dont use & to print the what is stored in a referenced
variable.


*/

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *pointer_str = &str;
	std::string &reference_str1 = str;
	std::string &reference_str2 = *pointer_str;
	std::cout << "Regular string: \t\t" <<  str << std::endl;
	std::cout << "Pointer to Regular string: \t" << *pointer_str << std::endl;
	std::cout << "Reference to Regular string: \t" << reference_str1 << std::endl;
	std::cout << "Reference to Pointer string: \t" << reference_str2 << std::endl;
}
