#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain: Default constructor called" << std::endl;

	_num_ideas = 0;
	for (size_t i = 0; i < 100; i++)
		this->_ideas[i] = "";
}

Brain::~Brain()
{
	std::cout << "Brain: Destructor called" << std::endl;
}

Brain::Brain(Brain const &copy)
{
	std::cout << "Brain: Copy constructor called " << this << std::endl;
	this->_num_ideas = copy._num_ideas;
	for (size_t i = 0; i < 100; i++)
		this->_ideas[i] = copy._ideas[i];
}

Brain &Brain::operator=(Brain const &copy)
{
	std::cout << "Brain: '=' operator called" << this << std::endl;
	if(this == &copy)
		return *this;

	this->_num_ideas = copy._num_ideas;
	for (size_t i = 0; i < 100; i++)
		this->_ideas[i] = copy._ideas[i];

	return *this;
}
