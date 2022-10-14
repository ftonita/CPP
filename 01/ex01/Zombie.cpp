#include "Zombie.hpp"

Zombie::Zombie()
{

}

Zombie::~Zombie()
{
	std::cout << _name << " was destroyed." << std::endl;
}

void Zombie::announce(void)
{
	std::cout << _name << ANNOUNCEMENT << std::endl;
}

void Zombie::setName(std::string name)
{
	_name = name;
}