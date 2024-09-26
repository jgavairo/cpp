/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:24:52 by jgavairo          #+#    #+#             */
/*   Updated: 2024/09/26 16:58:42 by jgavairo         ###   ########.fr       */
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

void PhoneBook::addContact()
{
	contacts[numberContact].setInfo();
	numberContact++;
}

void PhoneBook::searchContact()
{
	int i = 0;
	std::cout << "First Name | Last Name | Nickname" << std::endl;
	while (i < numberContact)
	{
		contacts[i].printResume();
		i++;
	}
}