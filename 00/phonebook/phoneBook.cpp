/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:24:52 by jgavairo          #+#    #+#             */
/*   Updated: 2024/09/30 17:54:10 by jgavairo         ###   ########.fr       */
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
	if (numberContacts == 0)
		std::cout << "Your phonebook is empty... type the 'ADD' command to add contacts." << std::endl;
	else
	{
		int i = 0;
		std::cout	<< std::setw(10) << std::right << "Index"
					<< "|" << std::setw(10) << std::right << "First Name"
					<< "|" << std::setw(10) << std::right << "Last Name"
					<< "|" << std::setw(10) << std::right << "Nickname"
					<< std::endl;
		while (i < numberContacts)
		{
			contacts[i].printResume();
			i++;
		}
	}
}

void PhoneBook::detailContact()
{
	std::string 		index;
	int					nb;
	
	if (numberContacts > 0)
	{
		nb = 0;
		std::cout << "Choose a valid index : ";
		std::cin >> index;
		std::stringstream ss(index);
		ss >> nb;
		if (ss.fail())
			std::cout << "Bad input." << std::endl;
		else if (nb > numberContacts || nb <= 0)
			std::cout << "Bad index, he doesn't exist." << std::endl;
		else 
			contacts[nb - 1].printDetails();
	}
}