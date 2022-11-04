#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat: default constructor called" << std::endl;
	_type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat: destructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &copy)
{
	std::cout << "WrongCat: copy constructor called" << std::endl;
	*this = copy;
}
WrongCat &WrongCat::operator=(WrongCat const &copy)
{
	std::cout << "WrongCat: '=' operator called" << std::endl;
	if (this == &copy)
		return *this;
	this->_type = copy._type;
	return *this;
}

void WrongCat::makeSound(void) const
{
	std::cout << "WrongCat: гав гав" << std::endl;
}