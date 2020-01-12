/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 16:58:30 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/11 23:37:46 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClassContact.hpp"
//# include <string>
//#include <stdio.h>
//#include <string.h>

Contact::Contact(void)
{
	/*
	** Calling constructor
	*/
	return;
}

void addContactName(Contact *contactInstance)
{
	std::cout << "Enter first name: ";
	std::getline(std::cin, contactInstance->firstName);

	std::cout << "Enter last Name: ";
	std::getline(std::cin, contactInstance->lastName);

	std::cout << "Enter nick name: ";
	std::getline(std::cin, contactInstance->nickName);

	std::cout << "Enter login: ";
	std::getline(std::cin, contactInstance->login);

	std::cout << "Enter postal address: ";
	std::getline(std::cin, contactInstance->postalAddress);

	std::cout << "Enter email Address: ";
	std::getline(std::cin, contactInstance->emailAddress);

	std::cout << "Enter phone number: ";
	std::getline(std::cin, contactInstance->phoneNumber);

	std::cout << "Enter birthday date: ";
	std::getline(std::cin, contactInstance->birthdayDate);

	std::cout << "Enter favorite meal: ";
	std::getline(std::cin, contactInstance->favoriteMeal);

	std::cout << "Enter underwear color: ";
	std::getline(std::cin, contactInstance->underwearColor);

	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, contactInstance->darkestSecret);
	std::cout << "New contact is added" << std::endl << std::endl;
}

Contact::~Contact(void)
{
	/*
	** Calling destructor
	*/
	return;
}


void phonebookUsage(bool error)
{
	const char *str = "Please use one of the following commands to use the program:";
	if(error == true)
		std::cout << "Invalid Input" << std::endl;
	std::cout << str << std::endl;
	std::cout << "ADD" << std::endl;
	std::cout << "SEARCH" << std::endl;
	std::cout << "EXIT" << std::endl << std::endl;
}

/*
	Contact *ci;
	ci = contactInstance;

	ci is just a reference or pointer to contactInstance;

*/

void phonebookPrint(Contact *contactInstance)
{
	Contact *ci;
	ci = contactInstance;
	std::cout << std::endl;
	std::cout << "First Name: " << ci->firstName << std::endl;
	std::cout << "Last Name: " << ci->lastName << std::endl;
	std::cout << "Nick Name: " << ci->nickName << std::endl;
	std::cout << "Login: " << ci->login << std::endl;
	std::cout << "Postal Address: " << ci->postalAddress << std::endl;
	std::cout << "Email Address: " << ci->emailAddress << std::endl;
	std::cout << "Phone Number: " << ci->phoneNumber << std::endl;
	std::cout << "Birthday Date: " << ci->birthdayDate << std::endl;
	std::cout << "Favorite Meal: " << ci->favoriteMeal << std::endl;
	std::cout << "Underwear Color: " << ci->underwearColor << std::endl;
	std::cout << "Darkest Secret: " << ci->darkestSecret << std::endl;

}

void welcomeUser(void)
{
	std::cout << "Welcome to phonbook program." << std::endl;
	phonebookUsage(false);
}

void showSavedContacts(Contact *contactInstance, int numberOfContacts)
{
	int i = 0;
	const char *headerdash= "____________________________________________";
	const char *headerRow = "|     index|first name| last name|  nickname|";
	std::cout << headerdash << std::endl << headerRow << std::endl;
	while(i < numberOfContacts)
	{
		std::cout << "|" << std::setw(10) << i; // Index
		std::cout << "|" << std::setw(10) << contactInstance[i].firstName;
		std::cout << "|" << std::setw(10) << contactInstance[i].lastName;
		std::cout << "|" << std::setw(10) << contactInstance[i].nickName;
		std::cout << "|" << std::endl;
		i++;
	}
}

void searchContact(Contact *contactInstance, int numberOfContacts)
{
	int index = 0;
	std::string contactIndex;
	
	showSavedContacts(contactInstance, numberOfContacts);
	std::cout << "Please enter the index of the contact: ";
	std::getline(std::cin, contactIndex);
//	std::cout << contactIndex;
	if(contactIndex[0] >= '0' && contactIndex[0] <= '7' && contactIndex[1] == '\0')
	{
		index = std::stoi(contactIndex);
		phonebookPrint(&contactInstance[index]);
	}
	else
		std::cout << "Please enter correct contact index." << std::endl << std::endl;
}

void commandLineStream(Contact *contactInstance)
{
	int i = 0;
	std::string str;
	welcomeUser();

	while(true)
	{
		std::cout << "phonebook > ";
		std::getline(std::cin, str);

		if(str == "ADD")
		{
			if(i == 8)
				std::cout << "Sorry Cannot enter anymore contacts" << std::endl;
			else
				addContactName(&contactInstance[i++]);
		}
		else if(str == "SEARCH")
		{
			searchContact(contactInstance, i);
/*			
			std::cout << "Please enter the index of the contact: ";
			std::getline(std::cin, contactIndex);
			std::cout << contactIndex;
			index = std::stoi(contactIndex);
			if(index >= 0 && index <= 7)
				phonebookPrint(&contactInstance[index]);
			else if(index == 8)
				break;
			else
				std::cout << "Please enter the index of correct contact" << std::endl;
*/			
		}
		else
			phonebookUsage(true);
	}


}

int main(void)
{
	Contact contactInstance[8];

	commandLineStream(contactInstance);

	phonebookPrint(&contactInstance[0]);
	
//	while(true)
//	{
//		std::cout << "phonebook > ";
//		std::getline(std::cin, str);
//
//		if(str == "ADD")
//			addContactName(&contactInstance[i++]);
//		else if(str == "SEARCH")
//		{
//			std::getline(std::cin, contactIndex);
//			std::cout << contactIndex;
//			if(contactIndex >= '0' && contactIndex <= '7')
//				phonebookPrint(&contactInstance[i]);
//		}
//		else
//			phonebookUsage(true);
//	}
}
