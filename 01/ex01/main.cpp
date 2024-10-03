/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:35:00 by jgavairo          #+#    #+#             */
/*   Updated: 2024/10/03 15:23:39 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
    int nb = 12;
    int i = 0;
    
    Zombie* horde = zombieHorde(nb, "Rayane");
    
    if (horde != NULL)
    {
        while (i < nb)
        {
            horde[i].announce();
            i++;
        }
        delete[] horde;
    }
    return 0;
}