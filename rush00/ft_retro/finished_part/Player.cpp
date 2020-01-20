/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 19:21:11 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/19 20:36:39 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Player.hpp"

Player::Player(void)
{
	std::cout << "Calling default constructor for Player class" << std::endl;
}

/*
Player::Player(std::string name)
{
	std::cout << name << std::endl;
}
*/
Player::Player(const Player &srcCopy)
{
	std::cout << "Calling copy constructor for Player class" << std::endl;
	*this = srcCopy;
}


Player &Player::operator = (const Player &rhs)
{
//	_xMax = rhs._xMax;
//	_yMax = rhs._yMax;
	std::cout << "Equal operator to set values for Player class" << std::endl;
	return(*this);
}

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
	keypad(_currentWindow, TRUE);
	nodelay(_currentWindow, TRUE);
	_character = c;
}


void Player::moveUp(void)
{
	mvwaddch(_currentWindow, _yLocal, _xLocal, ' ');
	if(_yLocal > 1)
		_yLocal--;
	yLocal = _yLocal;
	xLocal = _xLocal;
}

void Player::moveDown(void)
{	
	mvwaddch(_currentWindow, _yLocal, _xLocal, ' ');
	if((_yLocal + 2) < _yMax)
		_yLocal++;
	yLocal = _yLocal;
	xLocal = _xLocal;
}

void Player::moveLeft(void)
{
	mvwaddch(_currentWindow, _yLocal, _xLocal, ' ');
	if(_xLocal > 1)
		_xLocal--;
	yLocal = _yLocal;
	xLocal = _xLocal;
}

void Player::moveRight(void)
{
	mvwaddch(_currentWindow, _yLocal, _xLocal, ' ');
	if((_xLocal + 2) < _xMax)
		_xLocal++;
	yLocal = _yLocal;
	xLocal = _xLocal;
}

int Player::getMove(void)
{
//	WINDOW *bulletwin = newwin(0, 0, 0, 0);
//	Player *bullet = new Player(bulletwin, _yLocal, _xLocal, '-');
//	Bullet bullet;
	int userPressedKey = wgetch(_currentWindow);

	if(userPressedKey == KEY_UP)
		moveUp();
	else if(userPressedKey == KEY_DOWN)
		moveDown();
	else if(userPressedKey == KEY_LEFT)
		moveLeft();
	else if(userPressedKey == KEY_RIGHT)
		moveRight();
//	else if(userPressedKey == ' ')
//		releaseBullet();
	return(userPressedKey);
}


void  Player::releaseBullet(void)
{
	int xBullet;
	int yBullet;
	
	xBullet = _xLocal;
	yBullet = _yLocal;
	while(true)
	{
		if((xBullet + 2) == _xMax)
		{			
			mvprintw(yBullet, xBullet, " ");
			break;
		}
//		if((xBullet + 3) != _xMax)
//			mvprintw(yBullet, xBullet + 1, "-");
//		mvprintw(yBullet, xBullet, " ");	

		if((xBullet + 3) != _xMax)
			mvaddch(yBullet, xBullet + 1, '-');
		mvaddch(yBullet, xBullet, ' ');
		usleep(30000);
		xBullet++;
		refresh();
	}
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
	raw();
	noecho();
	cbreak();
	curs_set(0);
	nodelay(stdscr, true);
	
	// get screen size
	int yMax;
	int xMax;
//	yMax = 0;
//	xMax = 0;
	getmaxyx(stdscr, yMax, xMax);

	// create a windoe for our input
//	WINDOW *playwin = newwin(20, 50, (yMax/2) - 10, 10);	
	WINDOW *playwin = newwin(0, 0, 0, 0);
	box(playwin, 0, 0);
	refresh();
	wrefresh(playwin);

// Call the playership below
	Player *player = new Player(playwin, 1, 1, '>');
	int userInput;

	userInput = 0;
	
	while(true)
	{
		userInput = player->getMove();
		if(userInput == ESCAPE_KEY)
			break;
		else if(userInput == ' ')
			player->releaseBullet();
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
