/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:06:59 by jgavairo          #+#    #+#             */
/*   Updated: 2024/10/03 14:48:04 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
private:
    std::string _name;
    
public:
    Zombie();
    ~Zombie();
    void nameSetter(std::string name);
    void announce();
};

Zombie* zombieHorde(int nb, std::string name);