/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tutorial_08.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 17:13:58 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/18 19:20:46 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ncurses.h>

int main(void)
{
	// ncurses start
	initscr();
	noecho();
	cbreak();
	
	// get screen size
	int yMax, xMax;
	getmaxyx(stdscr, yMax, xMax);

	// Create a window for our input
	WINDOW *playwin = newwin(20, 50, (yMax/2) - 10, 10);
	box(playwin, 0, 0);
	refresh();
	wrefresh(playwin);

	// make sure program waits before exiting...
	getch();
	endwin();

	return(0);

}
