/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:15:27 by jgavairo          #+#    #+#             */
/*   Updated: 2024/10/02 11:00:57 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

int main()
{
	std::cout << "Create zombie on the heap memory.." << std::endl << std::endl;
	Zombie* newzombie = newZombie("New_Zombie");
	newzombie->announce();
	delete newzombie;
	
	std::cout << std::endl << std::endl << std::endl;

	std::cout << "Create zombie on the stack memory.." << std::endl << std::endl;
	randomChump("Temporary_Zombie");
	
    return (0);
}