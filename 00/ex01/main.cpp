/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:57:43 by jgavairo          #+#    #+#             */
/*   Updated: 2024/10/14 13:04:59 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	std::string cmd; 
	PhoneBook phonebook;
	while (1)
	{
		getline(std::cin, cmd);
		if (std::cin.eof())
			break ;
		if (cmd == "SEARCH")
		{
		   	phonebook.searchContact();	
			if (phonebook.detailContact() == -1)
				break ;
		}
		else if (cmd == "ADD")
		{
			if (phonebook.addContact() == -1)
				break ;
		}
		else if (cmd == "EXIT")
			break ;
		else 
			std::cout << "Please type a valid command." << std::endl;
	}
	return (0);
}