/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 20:34:17 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/07 21:24:04 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  SAMPLE1_CLASS_HPP
# define SAMPLE1_CLASS_HPP


/*
Initialize 3 class attributes (a1, a2, a3) with 3 parameters (p1, p2, p3).

Store value of p1 to a1, p2 to a2, p3 and to a3
*/
class Sample1
{
	public:
		char	a1;
		int		a2;
		float	a3;

		Sample1(char p1, int p2, float p3);
		~Sample1(void);
};

#endif
