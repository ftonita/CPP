#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>
#include "Brain.hpp"

class Animal
{
	private:

	protected:
	std::string _type;
	Brain		*_brain;

	public:

	Animal();
	virtual ~Animal();
	//Animal(Animal const &copy);

	//virtual Animal &operator=(Animal const &copy);

	virtual void		makeSound(void) const = 0;
	virtual std::string	getType(void) const = 0;
};

#endif