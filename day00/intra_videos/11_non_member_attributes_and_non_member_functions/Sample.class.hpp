/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 19:35:37 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/08 21:25:15 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

/*
Non-member attributes and functions
We want a counter to know how many instances of a class have been made.
*/

class Sample
{
	public:
		Sample(void);
		~Sample(void);

		static int getNbInst(void);
	
	private:
		static int _nbInst;
};

#endif
