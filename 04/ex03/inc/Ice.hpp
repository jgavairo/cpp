#ifndef ICE_HPP
# define ICE_HPP

#include "../inc/AMateria.hpp"
#include "../inc/Character.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        Ice(const Ice& other);

        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);

        Ice& operator=(const Ice& other);

        virtual ~Ice();
};

#endif