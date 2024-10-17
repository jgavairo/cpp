/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:12:52 by jgavairo          #+#    #+#             */
/*   Updated: 2024/10/17 17:08:21 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->_fixedNb = 0;
}

Fixed::Fixed(const Fixed& other)
{
    *this = other;
}

Fixed::Fixed(const int intNb)
{
    this->setRawBits((intNb << _fractionnalBit));
}

Fixed::Fixed(const float floatNb)
{
    this->setRawBits((int)(roundf(floatNb * (1 << _fractionnalBit))));
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
    if (this != &other)
    {
        this->setRawBits(other.getRawBits());
    }
    return (*this);
}

bool Fixed::operator>(Fixed const &other) const
{
    return(this->getRawBits() > other.getRawBits());
}

bool Fixed::operator<(Fixed const &other) const
{
    return(this->getRawBits() < other.getRawBits());
}

bool Fixed::operator>=(Fixed const &other) const
{
    return(this->getRawBits() >= other.getRawBits());
}

bool Fixed::operator<=(Fixed const &other) const
{
    return(this->getRawBits() <= other.getRawBits());
}

bool Fixed::operator==(Fixed const &other) const
{
    return(this->getRawBits() == other.getRawBits());
}

bool Fixed::operator!=(Fixed const &other) const
{
    return(this->getRawBits() != other.getRawBits());
}

Fixed Fixed::operator+(Fixed const &other) const
{
    Fixed res;
    res.setRawBits(this->getRawBits() + other.getRawBits());
    return(res);
}

Fixed Fixed::operator-(Fixed const &other) const
{
    Fixed res;
    res.setRawBits(this->getRawBits() - other.getRawBits());
    return(res);
}

Fixed Fixed::operator*(Fixed const &other) const
{
    Fixed res;
    res.setRawBits((this->getRawBits() * other.getRawBits())/ (1 << _fractionnalBit));
    return(res);
}

Fixed Fixed::operator/(Fixed const &other) const
{
    Fixed res;
    res.setRawBits((this->getRawBits() << _fractionnalBit) / other.getRawBits());
    return(res);
}

Fixed& Fixed::operator++()
{
    this->_fixedNb += 1;
    return (*this);
}

Fixed& Fixed::operator--()
{
    this->_fixedNb -= 1;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp = *this;
    this->_fixedNb += 1;
    return tmp;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp = *this;
    this->_fixedNb -= 1;
    return tmp;
}

std::ostream& operator<<(std::ostream &out, Fixed const &fixed)
{
       out << fixed.toFloat();
       return (out);
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
    return (a < b ? a : b);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
    return (a < b ? a : b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b ? a : b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
    return (a > b ? a : b);
}

Fixed::~Fixed()
{
    
}
