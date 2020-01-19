/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpaceObject.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 14:55:37 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/19 15:01:53 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPACEOBJECT_HPP
# define SPACEOBJECT_HPP

class SpaceObject
{
	public:
		SpaceObject(void); // Default constructor - Canonical
		SpaceObject(const SpaceObject &srcCopy); // Copy constructor - Canonical
		SpaceObject &operator(const SpaceObject &rhs); // operator assignment - Canonical
		~SpaceObject(void); // Default desctructor - Canonical
};


#endif
