#ifndef ICE_HPP
# define ICE_HPP

#include "../inc/AMateria.hpp"
#include "../inc/ICharacter.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        Ice(Ice& const other);
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);

        virtual ~Ice();
};

#endif