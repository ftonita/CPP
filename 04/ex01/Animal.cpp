#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal: Default constructor called" << std::endl;
	_type = "unknown type";
	_brain = nullptr;
}

Animal::~Animal()
{
	std::cout << "Animal: Destructor called" << std::endl;
}

Animal::Animal(Animal const &copy)
{
	std::cout << "Animal: Copy constructor called" << std::endl;
	*this = copy;
	this->_brain = new Brain(*copy._brain);
}
Animal &Animal::operator=(Animal const &copy)
{
	std::cout << "Animal: '=' operator called" << std::endl;
	if (this == &copy)
		return *this;
	this->_type = copy._type;

	if(_brain != nullptr)
		delete _brain;
	this->_brain = new Brain(*copy._brain);

	return *this;
}

void Animal::makeSound(void) const
{
	std::cout << "Animal: Animal cannot make sound" << std::endl;
}

std::string Animal::getType(void) const
{
	return _type;
}