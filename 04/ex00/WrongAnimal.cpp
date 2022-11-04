#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Wrong Animal: default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Wrong Animal: destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy)
{
	std::cout << "Wrong Animal: copy constructor called" << std::endl;
	*this = copy;
}
WrongAnimal &WrongAnimal::operator=(WrongAnimal const &copy)
{
	std::cout << "Wrong Animal: '=' operator called" << std::endl;
	if (this == &copy)
		return *this;
	this->_type = copy._type;
	return *this;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "Wrong Animal can not say"	<< std::endl;
}

std::string WrongAnimal::getType() const
{
	return _type;
}