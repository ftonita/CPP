#include "Zombie.hpp"

Zombie::Zombie()
{
	_name = "Kekw";
	announce();
}

Zombie::Zombie(std::string name)
{
	_name = name;
	announce();
}

Zombie::~Zombie()
{
	std::cout << _name << " was destroyed." << std::endl;
}

void Zombie::announce(void)
{
	std::cout << _name << ANNOUNCEMENT << std::endl;
}

