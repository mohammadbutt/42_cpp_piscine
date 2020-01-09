/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 15:39:37 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/08 18:49:03 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

/*
Structural comparision on two instances and then check if they are equal or not

*/
class Sample
{
	public:
		Sample(int v);
		~Sample(void);

		int getFoo(void) const;
		int compare(Sample *other) const;
	
	private:
		int _foo;
};

#endif
