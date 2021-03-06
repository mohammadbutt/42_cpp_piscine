/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 19:26:18 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/13 15:52:17 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>

class Pony
{
	private:
		std::string _ponyName; // _ underscore means member is private
	public:
		Pony(std::string ponyName); // Constructor
		~Pony(void);
};

void ponyOnTheHeap(std::string ponyName);
void ponyOnTheStack(std::string ponyName);
# endif
