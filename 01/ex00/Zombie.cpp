/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 00:54:45 by jgavairo          #+#    #+#             */
/*   Updated: 2024/10/01 01:03:35 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    
}

void    Zombie::announce()
{
    std::cout << _name << ":  BraiiiiiiinnnzzzZ...";
}

Zombie::~Zombie()
{
    
}