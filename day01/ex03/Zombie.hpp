/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 22:03:41 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/13 22:25:47 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string _type;
		std::string _name;
	public:
		Zombie(void); // Default constructor
		Zombie(std::string name, std::string type);
		~Zombie(void);
		void announce(void);
};

#endif
