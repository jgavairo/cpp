/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:12:52 by jgavairo          #+#    #+#             */
/*   Updated: 2024/10/15 22:33:20 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_fixedNb = 0;
}

Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixedNb);
} 

void Fixed::setRawBits(int const raw)
{
    this->_fixedNb = raw;
} 

Fixed&  Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called   " << std::endl;
    if (this != &other)
    {
        this->setRawBits(other.getRawBits());
    }
    return (*this);
}


Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
