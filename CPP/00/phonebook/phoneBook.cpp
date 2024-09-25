/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:24:52 by jgavairo          #+#    #+#             */
/*   Updated: 2024/09/25 17:18:47 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "phoneBook.hpp"

PhoneBook::PhoneBook()
{
    numberContact = 0;
}

PhoneBook::~PhoneBook()
{
    
}

void PhoneBook::addContact(PhoneBook phonebook)
{
	phonebook.contacts[numberContact].setInfo();
	numberContact++;
}

void PhoneBook::searchContact(PhoneBook phonebook)
{
	int i = 0;
	std::cout << "First Name | Last Name | Nickname" << std::endl;
	while (i < numberContact)
	{
		phonebook.contacts[i].printResume();
		i++;
	}
}