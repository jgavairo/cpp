/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 22:39:37 by jgavairo          #+#    #+#             */
/*   Updated: 2024/10/11 23:56:40 by jgavairo         ###   ########.fr       */
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
	
	int i = 0;
	
	while (i < 4)
	{
		if (inputIndex[i] == input)
			break ;
		i++;
	}
	switch (i)
	{
		case 0:
			std::cout << "[DEBUG]" << std::endl;
			(this->*functions[0])();
			// Fall through
		case 1:
			std::cout << "[INFO]" << std::endl;
			(this->*functions[1])();
			// Fall through
		case 2:
			std::cout << "[WARNING]" << std::endl;
			(this->*functions[2])();
			// Fall through
		case 3:
			std::cout << "[ERROR]" << std::endl;
			(this->*functions[3])();
			break;
		default:
			std::cout << "Sorry, your input is invalid" << std::endl;
			break;
	}
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