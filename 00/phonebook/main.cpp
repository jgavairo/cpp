/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:57:43 by jgavairo          #+#    #+#             */
/*   Updated: 2024/09/30 23:45:53 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

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