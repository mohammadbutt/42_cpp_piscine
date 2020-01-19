/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tutorial06.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 15:55:35 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/18 17:13:34 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ncurses.h>

void registerUserKeys(WINDOW *inputwin)
{
	int userInput;

	userInput = 0;	
	keypad(inputwin, true);
	while(true)
	{
		userInput = wgetch(inputwin);
		if(userInput == KEY_UP)
		{
			mvwprintw(inputwin, 1, 1, "You pressed up arrow key");
			wrefresh(inputwin);
		}
		else if(userInput == KEY_DOWN)
		{
			mvwprintw(inputwin, 1, 1, "You pressed Down arrow key");
			wrefresh(inputwin);
		}
		else if(userInput == KEY_LEFT)
		{
			mvwprintw(inputwin, 1, 1, "You pressed Left arrow key");
			wrefresh(inputwin);
		}
		else if(userInput == KEY_RIGHT)
		{
			mvwprintw(inputwin, 1, 1, "You pressed Right arrow key");
			wrefresh(inputwin);
		}
		else
			break;
		clear();
		wrefresh(inputwin);
	}

}

int main(void)
{
	initscr();
	noecho();
	cbreak();
	
	int height, width, start_y, start_x;
	height =  0;
	width = 0;
	start_y = 0;
	start_x = 0;
	

	WINDOW *inputwin = newwin(height, width, start_y, start_x);
	refresh();
	box(inputwin, 0, 0);
	wrefresh(inputwin);

	registerUserKeys(inputwin);
	/*
	keypad(inputwin, true);


	while()
	int userInput = wgetch(inputwin);

	if(userInput == KEY_UP)
	{
		mvwprintw(inputwin, 1, 1, "You pressed up arrow key");
		wrefresh(inputwin);
	}
	if(userInput == KEY_DOWN)
	{
		mvwprintw(inputwin, 2, 2, "You pressed down arrow key");
		wrefresh(inputwin);
	}
	*/
	getch();
	endwin();

}
