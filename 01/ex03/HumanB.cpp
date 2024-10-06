/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 14:45:01 by jgavairo          #+#    #+#             */
/*   Updated: 2024/10/06 15:16:27 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon()
{
    
}

void    HumanB::setWeapon(Weapon& weapon)
{
    _weapon = &weapon;
    std::cout << _name << " just found a new weapon !" << std::endl;
}

void    HumanB::attack()
{
    if (_weapon)
    {
        std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
    }
    else
    {
        std::cout << _name << " has no weapon !" << std::endl;
    }
}

HumanB::~HumanB()
{
    
}