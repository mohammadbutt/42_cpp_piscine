/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 11:28:50 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/08 12:13:44 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

/*
It's good to use _ underscore prefix for all the private identifiers.
The underscore can be placed before or after the identifier.
*/
class Sample
{
	public:

		int publicFoo;

		Sample(void);
		~Sample(void);

		void publicBar(void) const;
	

	private:

		int _privateFoo;

		void _privateBar(void) const;
};

#endif
