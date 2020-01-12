/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 18:06:31 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/11 16:40:00 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

#include <iostream>

class Sample
{
	public:
		Sample(void); // Called constructor
		~Sample(void); // Called destructor to destory the function
};

/*
Note: constructors and destructors of c++ classes dont have a return type.
// These are return void.

*/

#endif
