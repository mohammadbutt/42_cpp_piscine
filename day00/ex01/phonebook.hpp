/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 15:27:30 by mbutt             #+#    #+#             */
/*   Updated: 2020/01/10 16:02:50 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class Contact
{
	public:
		Contact(void);					// constructor
		~Contact(void);					// destructor
	private:
		void search_contact(char *str);
		void show_contact(char *str);
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string login;
		std::string postal_address;
		std::string phone_number;
		std::string birth_date;
		std::string favorite_meal;
		std::string underwear_color;
		std::string darkest secret;
};

void add_contact(contact contact_to_add);


#endif
