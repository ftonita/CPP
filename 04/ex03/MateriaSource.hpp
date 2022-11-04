#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

#define COUNT_MATERIAS 4

class MateriaSource : public IMateriaSource {

private:
	AMateria	*_materias[COUNT_MATERIAS];

public:
	MateriaSource();
	MateriaSource(const MateriaSource &copy);
	MateriaSource &operator=(const MateriaSource &copy);
	~MateriaSource();
	void learnMateria(AMateria* m);
	AMateria* createMateria(std::string const & type);
};


#endif