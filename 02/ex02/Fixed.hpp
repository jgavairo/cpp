/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:12:54 by jgavairo          #+#    #+#             */
/*   Updated: 2024/10/17 16:50:00 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        static const int _fractionnalBit = 8;
        int _fixedNb;
    public:
        Fixed();
        Fixed(const int intNb);
        Fixed(const float floatNb);
        Fixed(const Fixed& inst);
        float toFloat() const;
        int toInt() const;
        Fixed& operator=(const Fixed& inst);
        int getRawBits(void) const; 
        void setRawBits(int const raw);
        bool operator<(Fixed const &other) const;
        bool operator>(Fixed const &other) const;
        bool operator!=(Fixed const &other) const;
        bool operator==(Fixed const &other) const;
        bool operator<=(Fixed const &other) const;
        bool operator>=(Fixed const &other) const;
        Fixed operator-(Fixed const &other) const;
        Fixed operator+(Fixed const &other) const;
        Fixed operator*(Fixed const &other) const;
        Fixed operator/(Fixed const &other) const;
        Fixed& operator++();
        Fixed& operator--();
        Fixed operator++(int);
        Fixed operator--(int);
        static Fixed& min(Fixed &a, Fixed &b);
        static const Fixed& min(const Fixed &a, const Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);
        static const Fixed &max(const Fixed &a, const Fixed &b);
        ~Fixed();

};

std::ostream& operator<<(std::ostream &out, Fixed const &fixed);