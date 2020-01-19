/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 19:21:11 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/18 21:36:52 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Player.hpp"

Player::Player(void)
{
	std::cout << "Calling default constructor" << std::endl;
}

/*
Player::Player(std::string name)
{
	std::cout << name << std::endl;
}
*/
Player::Player(const Player &srcCopy)
{
	std::cout << "Calling copy constructor" << std::endl;
	*this = srcCopy;
}

/*
Player &Player::operator = (const Player &rhs)
{
	_xMax = rhs._xMax;
	_yMax = rhs._yMax;
	std::cout << "Equal operator to set values" << std::endl;
	return(*this);
}
*/
Player::~Player(void)
{
	std::cout << "Calling desctructor" << std::endl;
}

// Functions for Player class

Player::Player(WINDOW *win, int y, int x, char c)
{
	_currentWindow = win;
	_yLocal = y;
	_xLocal = x;
	getmaxyx(_currentWindow, _yMax, _xMax);
	keypad(_currentWindow, true);
	_character = c;
}


void Player::moveUp(void)
{
	mvwaddch(_currentWindow, _yLocal, _xLocal, ' ');
	if(_yLocal > 1)
		_yLocal--;
}

void Player::moveDown(void)
{	
	mvwaddch(_currentWindow, _yLocal, _xLocal, ' ');
	if((_yLocal + 2) < _yMax)
		_yLocal++;
}

void Player::moveLeft(void)
{
	mvwaddch(_currentWindow, _yLocal, _xLocal, ' ');
	if(_xLocal > 1)
		_xLocal--;
}

void Player::moveRight(void)
{
	mvwaddch(_currentWindow, _yLocal, _xLocal, ' ');
	if((_xLocal + 2) < _xMax)
		_xLocal++;
}

int Player::getMove(void)
{
	int userPressedKey = wgetch(_currentWindow);

	if(userPressedKey == KEY_UP)
		moveUp();
	else if(userPressedKey == KEY_DOWN)
		moveDown();
	else if(userPressedKey == KEY_LEFT)
		moveLeft();
	else if(userPressedKey == KEY_RIGHT)
		moveRight();
	else if(userPressedKey == KEY_RIGHT && userPressedKey == KEY_UP)
	{
		moveUp();
		moveRight();
	}

	return(userPressedKey);
}

void Player::display(void) // render
{
	mvwaddch(_currentWindow, _yLocal, _xLocal, _character);
}


int main(int argc, char *argv[])
{
//	Player player;
	// starts ncurses
//	WINDOW *win;
	initscr();
	noecho();
	cbreak();

	// get screen size
	int yMax;
	int xMax;
//	yMax = 0;
//	xMax = 0;
	getmaxyx(stdscr, yMax, xMax);

	// create a windoe for our input
	WINDOW *playwin = newwin(20, 50, (yMax/2) - 10, 10);	
//	WINDOW *playwin = newwin(20, 50, yMax - 10, 10);
	box(playwin, 0, 0);
	refresh();
	wrefresh(playwin);

// Call the playership below
	Player *player = new Player(playwin, 1, 1, '>');
	while(player->getMove() != 27)
	{
		player->display();
		wrefresh(playwin);
	} 

// Call the playership above

	// makes sure program waits before exiting
//	getch();
	endwin();
	return(0);
	// ncurses ends
}
