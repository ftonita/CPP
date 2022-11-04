#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat: default constructor called" << std::endl;
	_type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Cat: destructor called" << std::endl;
}

Cat::Cat(Cat const &copy)
{
	std::cout << "Cat: copy constructor called" << std::endl;
	*this = copy;
}
Cat &Cat::operator=(Cat const &copy)
{
	std::cout << "Cat: '=' operator called" << std::endl;
	if (this == &copy)
		return *this;
	this->_type = copy._type;
	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << "Cat: meow-meow" << std::endl;
}
