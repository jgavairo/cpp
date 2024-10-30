#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "../inc/IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
private:
    AMateria* _materias[4];
public:
    MateriaSource();
    MateriaSource(MateriaSource& other);

    MateriaSource& operator=(MateriaSource& other);

    void learnMateria(AMateria* m);
    AMateria* createMateria(std::string const & type);

    ~MateriaSource();
};

#endif
