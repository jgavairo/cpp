/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:12:54 by jgavairo          #+#    #+#             */
/*   Updated: 2024/10/15 22:33:10 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
    private:
        static const int _fractionnalBit = 8;
        int _fixedNb;
    public:
       Fixed();
       Fixed(const Fixed& inst);
       Fixed& operator=(const Fixed& inst);
       int getRawBits(void) const; 
       void setRawBits(int const raw);
       ~Fixed();
};
