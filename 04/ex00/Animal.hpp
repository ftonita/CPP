#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>

class Animal
{
	private:

	protected:
	std::string _type;

	public:

	Animal();
	virtual ~Animal();
	Animal(Animal const &copy);

	Animal &operator=(Animal const &copy);

	virtual void	makeSound(void) const;
	std::string		getType(void) const;

};

#endif