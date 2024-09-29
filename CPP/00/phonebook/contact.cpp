/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:41:17 by jgavairo          #+#    #+#             */
/*   Updated: 2024/09/29 18:17:45 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact()
{

}

void Contact::setInfo(int i)
{
    index = i;
    std:: cout << "Firstname : ";
    getline(std::cin, firstName);
    std:: cout << "Last Name : ";
    getline(std::cin, lastName);
    std:: cout << "Nickname : ";
    getline(std::cin, nickName);
    std:: cout << "Phonenumber : ";
    getline(std::cin, phoneNumber);
}

std::string truncatestring(std::string str)
{
    if (str.length() > 10)
        return (str.substr(0, 9) + ".");
    return (str);
}

void    Contact::printResume()
{
    std::cout   << std::setw(10) << std::right << index
                << " | " << std::setw(10) << std::right << truncatestring(firstName)
                << " | " << std::setw(10) << std::right << truncatestring(lastName)
                << " | " << std::setw(10) << std::right << truncatestring(nickName)
                << std::endl;
}


Contact::~Contact()
{
   
}