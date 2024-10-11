/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:02:28 by jgavairo          #+#    #+#             */
/*   Updated: 2024/10/11 23:28:09 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error: bad argument, you can type DEBUG, INFO, WARNING or ERROR." << std::endl;
		std::cerr << "Exemple: ./Harl DEBUG, it's your turn !" << std::endl;
		return (-1);
	}
	Harl harl;
	harl.complain(argv[1]);
	return (0);
}