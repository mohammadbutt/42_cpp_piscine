/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 16:23:00 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/13 12:08:49 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_CONTACT_HPP
# define CLASS_CONTACT_HPP


# include <iostream>
# include <iomanip>
# include <string>

/*
Notes about headers or libraries that are included
# include <iostream> 	- to access cout, cin, getline
# include <iomanip>		- to access setw
# include <string> 		- to access stoi
*/

/*
** std::string
** Think of the above as:
** char *
**
** std::string str
** This in C is the equivalent of, but in C++ it is a class that also has
** functions:
** char *str
*/



class Contact
{
	public:
		Contact(void); 		// Constructor
		~Contact(void);		// Destructor
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string login;
		std::string postalAddress;
		std::string emailAddress;
		std::string phoneNumber;
		std::string birthdayDate;
		std::string favoriteMeal;
		std::string underwearColor;
		std::string darkestSecret;

	private:
		void welcomeUser(void);
		void phonebookUsage(bool error);
		void phoneBookLogo(void);


};

void searchContact(Contact *contactInstance, int numberOfContacts);
void commandLineStream(Contact *contactInstance);
void addContactName(Contact *addContact);
void phonebookPrint(Contact *contactInstance);

#endif
