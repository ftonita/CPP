#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"

class Cat : public Animal
{
	private:

	protected:

	public:
	
	Cat();
	~Cat();
	Cat(Cat const &copy);

	Cat &operator=(Cat const &copy);

	void	makeSound(void) const;
};

#endif