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