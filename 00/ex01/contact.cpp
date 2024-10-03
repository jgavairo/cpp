/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:59:26 by jgavairo          #+#    #+#             */
/*   Updated: 2024/09/30 23:58:48 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact()
{

}

std::string getNoEmptyInput(const std::string& prompt)
{
	std::string input;
		
	while (1)
	{
		std::cout << prompt;
		getline(std::cin, input);
		if (std::cin.eof())
			return ("");
		if (input.empty())
		{
			std::cout << "Error, empty value. Please retry !" << std::endl;
			continue ;
		}
		else
			break;
	}
	return (input);
}

int Contact::setInfo(int i)
{
	std::string getNoEmptyInput(const std::string& prompt);
		
	index = i;
	firstName = getNoEmptyInput("First name : ");
	if (firstName.empty())
		return (-1);
	lastName = getNoEmptyInput("Last name : ");
	if (lastName.empty())
		return (-1);
	nickName = getNoEmptyInput("Nickname : ");
	if (nickName.empty())
		return (-1);
	phoneNumber = getNoEmptyInput("Phone number : ");
	if (phoneNumber.empty())
		return (-1);
	darkestSecret = getNoEmptyInput("The darkest secret : ");
	if (darkestSecret.empty())
		return (-1);
	return (0);
}

std::string truncatestring(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	Contact::printResume()
{
	std::cout   << std::setw(10) << std::right << index
				<< "|" << std::setw(10) << std::right << truncatestring(firstName)
				<< "|" << std::setw(10) << std::right << truncatestring(lastName)
				<< "|" << std::setw(10) << std::right << truncatestring(nickName)
				<< std::endl;
}


void	Contact::printDetails()
{
	std::cout << "First name : " << firstName << std::endl;
	std::cout << "Last name : " << lastName << std::endl;
	std::cout << "Nickname : " << nickName << std::endl;
	std::cout << "Phone number : " << phoneNumber << std::endl;
	std::cout << "The darkest secret : " << darkestSecret << std::endl;
}

Contact::~Contact()
{
   
}