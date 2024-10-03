/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:11:49 by jgavairo          #+#    #+#             */
/*   Updated: 2024/10/03 14:47:46 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    _name = "Unnmed Zombie";
}

void	Zombie::nameSetter(std::string name)
{
    _name = name;
}

void	Zombie::announce()
{
    std::cout <<_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << _name << " has been destroyed" << std::endl;
}
