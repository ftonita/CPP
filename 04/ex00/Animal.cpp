#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal: Default constructor called" << std::endl;
	_type = "unknown type";
}

Animal::~Animal()
{
	std::cout << "Animal: Destructor called" << std::endl;
}

Animal::Animal(Animal const &copy)
{
	std::cout << "Animal: Copy constructor called" << std::endl;
	*this = copy;
}
Animal &Animal::operator=(Animal const &copy)
{
	std::cout << "Animal: '=' operator called" << std::endl;
	if (this == &copy)
		return *this;
	this->_type = copy._type;
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