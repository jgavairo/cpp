/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:32:20 by jgavairo          #+#    #+#             */
/*   Updated: 2024/09/30 16:10:55 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <iomanip>
#include <algorithm>

class Contact
{
private:
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;
    int         index;
    
public:
    Contact(/* args */);
    ~Contact();
    void setInfo(int i);
    void printResume();
    void printDetails();
    std::string getNoEmptyInput(const std::string& prompt);
};


