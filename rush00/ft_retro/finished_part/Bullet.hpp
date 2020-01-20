/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bullet.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 19:44:31 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/19 20:21:37 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BULLET_HPP
# define BULLET_HPP

#include <iostream>
#include <string>
#include <ncurses.h>

class Bullet
{
	public:
		Bullet(void); // Default constructor - Canonical
		Bullet(const Bullet &srcCopy); // Copy constructor - Canonical
		Bullet &operator = (const Bullet &rhs); // operator assignment - Canonical
		~Bullet(void); // Default destructor - Canonical
		Bullet(int x, int y, char character);
		int getX(void);
		int getY(void);
		void setX(int x);
		void setY(int y);
		bool getActive(void);
		void setActive(bool active);
		void draw(void);
		void travel(int screenWidth);
	private:
		int _x;
		int _y;
		char _symbol;
		bool _isActive;
};

#endif
