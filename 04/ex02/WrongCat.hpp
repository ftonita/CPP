#ifndef WRONGCAT_H
# define WRONGCAT_H


#include "WrongAnimal.hpp"

class WrongCat : virtual public WrongAnimal
{
	private:

	protected:

	public:
	
	WrongCat();
	~WrongCat();
	WrongCat(WrongCat const &copy);

	WrongCat &operator=(WrongCat const &copy);

	void	makeSound(void) const;
};

#endif
