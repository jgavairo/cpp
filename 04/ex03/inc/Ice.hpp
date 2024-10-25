#ifndef ICE_HPP
# define ICE_HPP

#include "../inc/AMateria.hpp"
#include "../inc/Character.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        Ice(Ice& const other);
        virtual AMateria* clone() const;
        virtual void use(Character& target);

        virtual ~Ice();
};

#endif