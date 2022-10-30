#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	_name = "ScavTrap";
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name):ClapTrap()
{
	_name = name;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
}

ScavTrap::~ScavTrap()
{

}

ScavTrap::ScavTrap(ScavTrap const &copy)
{
	*this = copy;
}
ScavTrap &ScavTrap::operator=(ScavTrap const &copy)
{
	if (this == &copy)
		return *this;
	this->_name = copy._name;
	this->_hit_points = copy._hit_points;
	this->_energy_points = copy._energy_points;
	this->_attack_damage = copy._attack_damage;
	return *this;
}

void ScavTrap::guardGate()
{
	std::cout << _name << " Gate keeper mod ON" << std::endl;
}