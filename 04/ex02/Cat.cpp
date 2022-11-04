#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat: default constructor called" << std::endl;
	_type = "Cat";
	_brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat: destructor called" << std::endl;
	if (_brain != nullptr)
		delete _brain;
}

Cat::Cat(Cat const &copy)
{
	std::cout << "Cat: copy constructor called" << std::endl;
	*this = copy;
	this->_brain = new Brain(*copy._brain);
}
Cat &Cat::operator=(Cat const &copy)
{
	std::cout << "Cat: '=' operator called" << std::endl;
	if (this == &copy)
		return *this;
	this->_type = copy._type;

	if(_brain != nullptr)
		delete _brain;
	this->_brain = new Brain(*copy._brain);
	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << "Cat: meow-meow" << std::endl;
}

std::string Cat::getType(void) const
{
	return this->_type;
}
