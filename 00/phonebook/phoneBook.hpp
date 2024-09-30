/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:58:23 by jgavairo          #+#    #+#             */
/*   Updated: 2024/09/30 17:58:25 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

class PhoneBook
{
    private :
        Contact contacts[8];
		int		numberofContact;
        int  numberContacts;
        
    public :
        PhoneBook();
        ~PhoneBook();
        void	addContact();
		void	searchContact();
        void    detailContact();

};