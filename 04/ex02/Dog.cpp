#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog: default constructor called" << std::endl;
	_type = "Dog";
	_brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog: destructor called" << std::endl;
	if (_brain != nullptr)
		delete _brain;
}

Dog::Dog(Dog const &copy)
{
	std::cout << "Dog: copy constructor called" << std::endl;
	*this = copy;
	this->_brain = new Brain(*copy._brain);
}
Dog &Dog::operator=(Dog const &copy)
{
	std::cout << "Dog: '=' operator called" << std::endl;
	if (this == &copy)
		return *this;
	this->_type = copy._type;

	if(_brain != nullptr)
		delete _brain;
	this->_brain = new Brain(*copy._brain);
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "Dog: хочу в шаурму" << std::endl;
}

std::string	Dog::getType(void) const
{
	return this->_type;
}