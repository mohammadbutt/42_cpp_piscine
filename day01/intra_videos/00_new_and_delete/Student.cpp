/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 18:58:10 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/13 12:55:24 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Student.hpp"

Student::Student(std::string login) : _login(login)
{
	std::cout << "Student" << this->_login << " is born" << std::endl;
}

Student::~Student(void)
{
	std::cout << "Student" << this->_login << " died" << std::endl;
}

int main(void)
{
	Student bob = Student(" Mohammad at stack");
	Student *jim = new Student(" Mohammad at heap");


	delete jim; // jim is deleted;
//	return(0); // bob is destroyed when the program ends. We dont need a return
}
