/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 19:27:01 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/09 19:58:34 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


void to_upper(char *argv)
{
	int i;

	i = 0;
	while(argv[i])
	{
		if(argv[i] >= 'a' && argv[i] <= 'z')
			argv[i] = argv[i] - 32;
		i++;
	}
}

void ft_all_uppercase(int argc, char *argv[])
{
	int i;

	i = 1;
	while(i < argc)
		to_upper(argv[i++]);
}

void ft_print_all_args(int argc, char *argv[])
{
	int i;

	i = 1;
	while(i < argc)
		std::cout << argv[i++];
}

/*
argument counter starts at 1
*/

int main(int argc, char *argv[])
{
	if(argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		ft_all_uppercase(argc, argv);
		ft_print_all_args(argc, argv);
		std::cout << std::endl;
	}
}
