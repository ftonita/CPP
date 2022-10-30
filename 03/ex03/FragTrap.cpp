#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	_name = "FragTrap";
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
}

FragTrap::FragTrap(std::string name):ClapTrap()
{
	_name = name;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
}

FragTrap::~FragTrap()
{

}

FragTrap::FragTrap(FragTrap const &copy)
{
	*this = copy;
}
FragTrap &FragTrap::operator=(FragTrap const &copy)
{
	if (this == &copy)
		return *this;
	this->_name = copy._name;
	this->_hit_points = copy._hit_points;
	this->_energy_points = copy._energy_points;
	this->_attack_damage = copy._attack_damage;
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << _name << " high fives guys" << std::endl;
}