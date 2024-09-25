/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 13:34:32 by jgavairo          #+#    #+#             */
/*   Updated: 2024/09/25 13:55:27 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (int argc, char **argv)
{
    int i = 1, j = 0;

    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    
    while (argv[i])
    {
        while (argv[i][j])
        {
            std::cout << (char)std::toupper(argv[i][j]);
            j++;
        }
        j = 0;
        i++;
    }
    std::cout << std::endl;
}