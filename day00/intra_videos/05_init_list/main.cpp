/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 21:10:05 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/07 21:23:57 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample1.class.hpp"
#include "Sample2.class.hpp"

int main(void)
{
	Sample1 instance1('B', 1, 9.4);
	std::cout << std::endl;
	Sample2 instance2('A', 2, 5.6);	
}
