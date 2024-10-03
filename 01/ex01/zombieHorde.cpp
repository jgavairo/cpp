/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:22:32 by jgavairo          #+#    #+#             */
/*   Updated: 2024/10/03 15:20:55 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int nb, std::string name)
{
    if (nb <= 0)
        return (NULL);

    Zombie* horde = new Zombie[nb];

    for(int i = 0; i < nb; i++)
    {
        horde[i].nameSetter(name);
    }

    return (horde);
}