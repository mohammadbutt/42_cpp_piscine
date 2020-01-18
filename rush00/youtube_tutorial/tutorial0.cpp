/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tutorial0.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 11:04:03 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/18 15:08:42 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ncurses.h>



int main(int argc, char *argv[])
{
//	init(); // initializes screen;
	initscr(); // initializes screen, allocates memory
	cbreak(); // user will be able to close the program with Ctrl + c
	noecho(); 	// Will not echo user pressed keys onto screen, but these do get
				// registered
	/*
	** Everything happens between initscr() and endwin()
	*/
	
	int x = 10;
	int y = 10;

	move(y, x); // y comes first and then x
	printw("Hello World!\n"); // Will print Hello World in the new window

	refresh(); // refreshes screen

//	getch(); // wait for the user to press a key, returns int value of whatever
			 // key was pressed.

	int c = getch();
//	refresh();
//	clear();
	move(0, 0);
	printw("%d", c);

	x = 0;
	y = 20;

	mvprintw(y, x, "Hello World!"); // mvprintw will move and print at x y coordinates

// Let's create a window
// WINDOW class is used to create a window
	int height, width, start_y, start_x;
	
	height = 10;
	width = 20;
	start_x = 10;
	start_y = 10;

	WINDOW *win = newwin(height, width, start_y, start_x); // This will create a window
	refresh(); // Need to use refresh() after creating a window.

//	box(win, 0, 0);
	box(win, '|', '-');
	wprintw(win, "Text at line 1"); // prints text inside the window
	mvwprintw(win, 3, 0,  "Text at line 2");// prints text inside the window at y = 3 and x = 0
	wrefresh(win);

	int yBeg, xBeg, yMax, xMax;

	getyx(stdscr, y, x); 		  // Current y and x values;
	getbegyx(stdscr, yBeg, xBeg); // Beginning y and x values;
	getmaxyx(stdscr, yMax, xMax); // max y and x values
	printw("y:|%d| x:|%d| yBeg:|%d| xBeg|%d|", y, x, yBeg, xBeg);
	printw("yMax:|%d| xMax:|%d|", yMax, xMax);

	getch();
	endwin(); // deallocates memory
	return(0);
}


