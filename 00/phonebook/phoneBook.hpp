/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:24:49 by jgavairo          #+#    #+#             */
/*   Updated: 2024/09/30 11:51:10 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

class PhoneBook
{
    private :
        Contact contacts[8];
		int		numberofContact;
        int     numberContacts;
        
    public :
        PhoneBook();
        ~PhoneBook();
        void	addContact();
		void	searchContact();
        void    detailContact();

};