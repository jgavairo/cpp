/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:12:54 by jgavairo          #+#    #+#             */
/*   Updated: 2024/10/17 15:17:22 by jgavairo         ###   ########.fr       */
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
        void setRawBits(int const raw);
        int getRawBits(void) const; 
        Fixed& operator=(const Fixed& inst);
       ~Fixed();

};

std::ostream& operator<<(std::ostream &out, Fixed const &fixed);