/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:12:56 by jgavairo          #+#    #+#             */
/*   Updated: 2024/10/18 16:32:07 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void) {
    Fixed a;
    std::cout << std::endl;
    std::cout << "Initial value of a getRawBits: " << a.getRawBits() << std::endl << std::endl;;

    Fixed b(a);
    std::cout << "Value of b: " << b.getRawBits() << std::endl << std::endl;;

    Fixed c;
    c = b;
    std::cout << "Value of c " << c.getRawBits() << std::endl << std::endl;;

    a.setRawBits(123);
    std::cout << "Value of a after setRawBits(123): " << a.getRawBits() << std::endl << std::endl;

    std::cout << "Value of b: " << b.getRawBits() << std::endl << std::endl;
    std::cout << "Value of c: " << c.getRawBits() << std::endl << std::endl;

    Fixed d;
    d.setRawBits(256);
    std::cout << "Value of d after setRawBits(256): " << d.getRawBits() << std::endl << std::endl;

    return (0);
}