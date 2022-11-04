#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

#include <iostream>

class WrongAnimal
{
	private:

	protected:

	std::string _type;

	public:
	
	WrongAnimal();
	virtual ~WrongAnimal();
	WrongAnimal(WrongAnimal const &copy);

	WrongAnimal &operator=(WrongAnimal const &copy);

	virtual void makeSound(void) const;
	std::string getType() const;
};


#endif