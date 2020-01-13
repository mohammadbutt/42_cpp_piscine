/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 18:54:46 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/12 19:23:37 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STUDENT_HPP
# define STUDENT_HPP

#include <iostream>
#include <string>

class Student
{
	private:
		std::string _login;
	public:
		Student(std::string login);
		~Student(void);
};

# endif
