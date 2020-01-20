/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bullet.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 19:51:20 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/19 20:25:25 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bullet.hpp"

Bullet::Bullet(void)
{
	std::cout << "Default constructor - Bullet class" << std::endl;
}

Bullet::Bullet(const Bullet &srcCopy)
{
	std::cout << "Copy constructor - Bullet class" << std::endl;
	*this = srcCopy;
}

Bullet &Bullet::operator = (const Bullet &rhs)
{
	std::cout << "Equal operator to set values - Bullet class" << std::endl;
	if(this != &rhs)
	{
		_x = rhs._x;
		_y = rhs._y;
		_symbol = rhs._symbol;
		_isActive = rhs._isActive;
	}
	return(*this);
}

Bullet::~Bullet(void)
{
	std::cout << "Calling destructor" << std::endl;
}

// Above are the canonical formatted class members
//
Bullet::Bullet(int x, int y, char character) : _x(x), _y(y), _symbol(character)
{
	std::cout << "Calling Bullet constructor with x, y, and character";
	std::cout << std::endl;
}

int Bullet::getX(void)
{
	return(_x);
}

int Bullet::getY(void)
{
	return(_y);
}

void Bullet::setX(int x)
{
	_x = x;
}

void Bullet::setY(int y)
{
	_y = y;
}

bool Bullet::getActive(void)
{
	return(_isActive);
}

void Bullet::setActive(bool active)
{
	_isActive = active;
}

void Bullet::draw(void)
{
	move(_y, _x);
	addch(_symbol);
}

void Bullet::travel(int screenWidth)
{
	if(_isActive)
	{
		_x++;
		draw();
		if((_x + 2) >= screenWidth)
			_isActive = false;
	}
}

/*
int main(void)
{
	Bullet bullet;
}
*/
