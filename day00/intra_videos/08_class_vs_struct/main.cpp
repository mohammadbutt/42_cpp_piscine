/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 12:31:46 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/08 13:04:51 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample1.class.hpp"
#include "Sample2.class.hpp"

int main(void)
{
	Sample1 instance1;
	std::cout << std::endl;
	Sample2 instance2; 	// This will give errors because a class by default is
						// private. To access this we have to explicitly make
						// the class "public".
}
