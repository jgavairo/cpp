#include "MateriaSource.hpp"

MateriaSource::MateriaSource() 
{
    for (int i = 0; i < 4; i++) {
        _materias[i] = NULL;
    }
}

MateriaSource::MateriaSource(MateriaSource& other) 
{
    *this = other;
}

MateriaSource& MateriaSource::operator=(MateriaSource& other)
{
    for (int i = 0; i < 4; i++)
    {
        if (other._materias[i])
            this->_materias[i] = other._materias[i]->clone();
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria* m) 
{
    for (int i = 0; i < 4; i++) {
        if (!_materias[i]) 
        {
            _materias[i] = m;
            break;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type) 
{
    for (int i = 0; i < 4; i++) 
    {
        if (_materias[i] && _materias[i]->getType() == type) 
            return _materias[i]->clone();
    }
    return NULL;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++) {
        if (_materias[i])
            delete _materias[i];
    }
}