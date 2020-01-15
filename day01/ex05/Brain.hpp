/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 18:16:54 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/14 22:09:41 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <sstream>

/*
#include <sstream> 		- to access stringstream
*/

class Brain
{
	private:
		std::string _memoryAddress;
	public:
		std::string memoryAddress;
		Brain(void); // 1.0
		~Brain(void); // 1.1
		const std::string identify(void) const; //1.2
		void	setMemoryAddress(void);
};

/*
 1.0 - Constructor
 1.1 - Destructor
 1.2 - identify function that returns a string containing brain's memory
 		 address.
*/

# endif
