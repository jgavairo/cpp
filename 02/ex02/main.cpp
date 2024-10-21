/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:12:56 by jgavairo          #+#    #+#             */
/*   Updated: 2024/10/18 16:34:44 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
    Fixed a;
    Fixed const b(10);
    Fixed const c(42.42f);
    Fixed const d(b);
    Fixed e;
    e = Fixed(1234.4321f);

    std::cout << "Display values: " << std::endl << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;
    std::cout << "d: " << d << std::endl;
    std::cout << "e: " << e << std::endl;

    std::cout << std::endl;
    std::cout << "Comparisons (0 = False, 1 = True): " << std::endl << std::endl;
    std::cout << "b > c: " << (b > c) << std::endl;
    std::cout << "b < c: " << (b < c) << std::endl;
    std::cout << "b >= b: " << (b >= b) << std::endl;
    std::cout << "b <= c: " << (b <= c) << std::endl;
    std::cout << "b == d: " << (b == d) << std::endl;
    std::cout << "b != c: " << (b != c) << std::endl;

    std::cout << std::endl;
    std::cout << "Arithmetic operator : " << std::endl << std::endl;
    Fixed f = b + c;
    Fixed g = e - b;
    Fixed h = b * c;
    Fixed i = e / b;

    std::cout << "b + c: " << f << std::endl;
    std::cout << "e - b: " << g << std::endl;
    std::cout << "b * c: " << h << std::endl;
    std::cout << "e / b: " << i << std::endl;

    std::cout << std::endl;
    std::cout << "Testing increment and decrement operators: " << std::endl << std::endl;
    std::cout << "a before increment: " << a << std::endl;
    std::cout << "++a: " << ++a << std::endl;
    std::cout << "a after increment: " << a << std::endl;
    std::cout << "a++: " << a++ << std::endl;
    std::cout << "a after post-increment: " << a << std::endl;
    std::cout << "--a: " << --a << std::endl;
    std::cout << "a after pre-decrement: " << a << std::endl;
    std::cout << "a--: " << a-- << std::endl;
    std::cout << "a after post-decrement: " << a << std::endl;

    std::cout << std::endl;
    std::cout << "Use of min and max : " << std::endl << std::endl;
    std::cout << "min(b, c): " << Fixed::min(b, c) << std::endl;
    std::cout << "max(b, c): " << Fixed::max(b, c) << std::endl;

    return (0);
}