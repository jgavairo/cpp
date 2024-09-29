/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:24:52 by jgavairo          #+#    #+#             */
/*   Updated: 2024/09/29 18:16:37 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "phoneBook.hpp"

PhoneBook::PhoneBook()
{
    numberContacts = 0;
	numberofContact = 0;
}

PhoneBook::~PhoneBook()
{
    
}

void PhoneBook::addContact()
{
	if (numberContacts < 8)
		numberContacts++;
	if (numberofContact < 8)
	{
		contacts[numberofContact].setInfo(numberofContact + 1);
		numberofContact++;
	}
	else
	{
		numberofContact = 0;
		contacts[numberofContact].setInfo(numberofContact + 1);
		numberofContact++;
	}
}

void PhoneBook::searchContact()
{
	int i = 0;
	std::cout	<< std::setw(10) << std::right << "Index"
				<< " | " << std::setw(10) << std::right << "First Name"
				<< " | " << std::setw(10) << std::right << "Last Name"
				<< " | " << std::setw(10) << std::right << "Nickname"
				<< std::endl;
	while (i < numberContacts)
	{
		contacts[i].printResume();
		i++;
	}
}