/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 19:35:21 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/07 20:30:39 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

/*
Constructors and destructors have the same name as the class.
*/

class Sample
{
	public:
		int foo;
		Sample(void); // constructor
		~Sample(void); // Destructor
		void bar(void);
};

#endif
