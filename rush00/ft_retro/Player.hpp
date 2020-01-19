/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 19:15:07 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/18 22:21:04 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_HPP
# define PLAYER_HPP

#include <iostream>
#include <string>
#include <ncurses.h>

class Player
{
	public:
		Player(void); // Default constructor - Canonical
		Player(const Player &srcCopy); // Copy constructor - Canonical
//		Player &operator = (const Player &rhs); // Operator assignment - Canonical
		~Player(void); // Default constructor - Canonical
		Player(WINDOW *win, int y, int x, char c);
		void moveUp(void);
		void moveDown(void);
		void moveLeft(void);
		void moveRight(void);
		int getMove(void);
		void getBullet(void);
		void display(void); // render
		int xLocal;
		int yLocal;
	private:
		int _xLocal;
		int _yLocal;
		int _xMax;
		int _yMax;
		char _character;
		WINDOW *_currentWindow;
};


# endif

