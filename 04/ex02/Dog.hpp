#ifndef DOG_H
# define DOG_H

#include "Animal.hpp"

class Dog : public Animal
{
	private:

	protected:

	public:
	
	Dog();
	~Dog();
	Dog(Dog const &copy);

	Dog &operator=(Dog const &copy);
	std::string	getType(void) const;
	void	makeSound(void) const;
};


#endif