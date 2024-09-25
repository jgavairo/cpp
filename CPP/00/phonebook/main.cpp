/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:38:01 by jgavairo          #+#    #+#             */
/*   Updated: 2024/09/25 17:11:36 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

int main()
{
    std::string cmd; 
    PhoneBook phonebook;
    while (1)
    {
        std::cin >> cmd;
        if (cmd == "SEARCH")
            phonebook.searchContact(phonebook);
        else if (cmd == "ADD")
            phonebook.addContact(phonebook);
        else if (cmd == "EXIT")
            break ;
    }
    return (0);
}