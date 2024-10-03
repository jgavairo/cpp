/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:25:23 by jgavairo          #+#    #+#             */
/*   Updated: 2024/10/03 16:38:57 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    _type = type;
}

std::string& Weapon::getType()
{
    return (_type);
}

void    Weapon::setType(std::string newType)
{
    _type = newType;
}

Weapon::~Weapon()
{
    
}