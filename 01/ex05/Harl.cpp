/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 22:39:37 by jgavairo          #+#    #+#             */
/*   Updated: 2024/10/11 23:19:35 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
		
}

void Harl::complain(std::string input)
{
	void (Harl::*functions[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
		
	std::string inputIndex[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (inputIndex[i] == input)
		{
			(this->*functions[i])();
			return ;
		}
	}
	std::cout << "Sorry, your input is invalid" << std::endl;
}

void Harl::debug()
{
	std::cout << "Debugging... is done." << std::endl;
}

void Harl::info()
{
	std::cout << "For more informations, +333.345.456" << std::endl;
}

void Harl::warning()
{
	std::cout << "Warning! Are you sure?" << std::endl;
}

void Harl::error()
{
	std::cout << "Error, close the program" << std::endl;
}

Harl::~Harl()
{
		
}