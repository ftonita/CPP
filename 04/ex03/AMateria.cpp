#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria: default constructor called" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria: destructor called" << std::endl;
}

AMateria::AMateria(const std::string &type)
{
	_type = type;
	std::cout << "AMateria: type constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &copy) {
	std::cout << "AMateria: copy constructor called" << std::endl;
	*this = copy;
}

AMateria &AMateria::operator=(const AMateria &copy) {
	std::cout << "AMateria: '=' operator called" << std::endl;
	if (this != &copy) {
		this->_type = copy._type;
	}
	return *this;
}

const std::string &AMateria::getType() const {
	return this->_type;
}