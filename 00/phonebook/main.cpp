/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:57:43 by jgavairo          #+#    #+#             */
/*   Updated: 2024/09/30 17:57:45 by jgavairo         ###   ########.fr       */
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
		if (cmd == "SEARCH")
		{
		   	phonebook.searchContact();	
			phonebook.detailContact();
		}
		else if (cmd == "ADD")
			phonebook.addContact();
		else if (cmd == "EXIT")
			break ;
		else 
			std::cout << "Please type a valid command." << std::endl;
	}
	return (0);
}