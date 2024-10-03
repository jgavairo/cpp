/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:58:23 by jgavairo          #+#    #+#             */
/*   Updated: 2024/09/30 23:44:58 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

class PhoneBook
{
	private :
		Contact contacts[8];
		int		numberofContact;
		int		numberContacts;
		
	public :
		PhoneBook();
		~PhoneBook();
		int 	addContact();
		void	searchContact();
		int		detailContact();
};