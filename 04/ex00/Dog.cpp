#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog: default constructor called" << std::endl;
	_type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog: destructor called" << std::endl;
}

Dog::Dog(Dog const &copy)
{
	std::cout << "Dog: copy constructor called" << std::endl;
	*this = copy;
}
Dog &Dog::operator=(Dog const &copy)
{
	std::cout << "Dog: '=' operator called" << std::endl;
	if (this == &copy)
		return *this;
	this->_type = copy._type;
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "Dog: хочу в шаурму" << std::endl;
}