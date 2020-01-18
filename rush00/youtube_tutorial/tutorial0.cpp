/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tutorial0.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 11:04:03 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/18 11:23:56 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ncurses.h>



int main(int argc, char *argv[])
{
//	init(); // initializes screen;
	initscr(); // initializes screen, allocates memory
	/*
	** Everything happens between initscr() and endwin()
	*/

	printw("Hello World!\n"); // Will print Hello World in the new window

	refresh(); // refreshes screen

//	getch(); // wait for the user to press a key, returns int value of whatever
			 // key was pressed.

	int c = getch();

	printw("%d", c);
	getch();
	endwin(); // deallocates memory
	return(0);
}


