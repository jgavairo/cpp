/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:12:52 by jgavairo          #+#    #+#             */
/*   Updated: 2024/10/16 16:28:30 by jgavairo         ###   ########.fr       */
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

Fixed::Fixed(const int intNb)
{
    std::cout << "Int constructor called" << std::endl;
    this->setRawBits((intNb * 256));
}

Fixed::Fixed(const float floatNb)
{
    std::cout << "Float constructor called" << std::endl;
    this->setRawBits(((int)(roundf(floatNb * 256))));
}

int Fixed::getRawBits(void) const
{
    return (this->_fixedNb);
} 

void Fixed::setRawBits(int const raw)
{
    this->_fixedNb = raw;
} 

float Fixed::toFloat() const
{
    return (static_cast<float>(this->getRawBits()) / 256);
}

int Fixed::toInt() const
{
    return (this->getRawBits() / 256);
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

std::ostream& operator<<(std::ostream &out, Fixed const &fixed)
{
       out << fixed.toFloat();
       return (out);
}


Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
