/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:58:04 by jgavairo          #+#    #+#             */
/*   Updated: 2024/10/14 13:04:47 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	numberContacts = 0;
	numberofContact = 0;
}

PhoneBook::~PhoneBook()
{
		
}

int PhoneBook::addContact()
{
	if (numberContacts < 8)
		numberContacts++;
	if (numberofContact < 8)
	{
		if (contacts[numberofContact].setInfo(numberofContact + 1) == -1)
			return (-1);
		numberofContact++;
	}
	else
	{
		numberofContact = 0;
		if (contacts[numberofContact].setInfo(numberofContact + 1) == -1)
			return (-1);
		numberofContact++;
	}
	return (0);
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

int PhoneBook::detailContact()
{
	std::string 		index;
	int					nb;
	
	if (numberContacts > 0)
	{
		nb = 0;
		std::cout << "Choose a valid index : ";
		getline(std::cin, index);
		if (std::cin.eof())
			return (-1);
		std::stringstream ss(index);
		ss >> nb;
		if (ss.fail())
			std::cout << "Bad input." << std::endl;
		else if (nb > numberContacts || nb <= 0)
			std::cout << "Bad index, he doesn't exist." << std::endl;
		else 
			contacts[nb - 1].printDetails();
	}
	return (0);
}