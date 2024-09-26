/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:41:17 by jgavairo          #+#    #+#             */
/*   Updated: 2024/09/26 16:21:31 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact()
{

}

void Contact::setInfo()
{
    std:: cout << "Firstname : ";
    std:: cin >> firstName;
    std:: cout << "Last Name : ";
    std:: cin >> lastName;
    std:: cout << "Nickname : ";
    std:: cin >> nickName;
    std:: cout << "Phonenumber : ";
    std:: cin >> phoneNumber;
}

void    Contact::printResume()
{
    std::cout << firstName << " | " << lastName << " | " << nickName << std::endl;
}


Contact::~Contact()
{
   
}