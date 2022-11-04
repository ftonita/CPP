#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#define COUNT_MATERIAS 4

class Character : public ICharacter{

private:
	std::string _name;
	AMateria	*_materias[COUNT_MATERIAS];

public:
	Character();
	Character(std::string name);
	~Character();
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};


#endif