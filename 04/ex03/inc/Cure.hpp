#ifndef CURE_HPP
# define CURE_HPP

#include "../inc/AMateria.hpp"
#include "../inc/Character.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        Cure(Cure& const other);
        virtual AMateria* clone() const;
        virtual void use(Character& target);

        virtual ~Cure();
};

#endif