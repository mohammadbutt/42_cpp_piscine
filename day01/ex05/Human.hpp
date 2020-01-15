/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 20:03:43 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/14 22:09:04 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"

class Human
{
	private:
		const Brain _brain;
	public:
		Human(void);
		~Human(void);
		const Brain& getBrain(void);
		std::string identify(void); // Calls the function of brain identify

};

#endif
