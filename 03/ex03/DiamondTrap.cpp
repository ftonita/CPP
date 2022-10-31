#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)
{
	_name = name;
	ClapTrap::_name = name + "_clap_name";
	_hit_points = FragTrap::_hit_points;
	_energy_points = ScavTrap::_energy_points;
	_attack_damage = FragTrap::_attack_damage;
}

DiamondTrap::~DiamondTrap()
{

}

DiamondTrap::DiamondTrap(DiamondTrap const &copy)
{
	*this = copy;
}
DiamondTrap &DiamondTrap::operator=(DiamondTrap const &copy)
{
	if (this == &copy)
		return *this;
	this->_name = copy._name;
	this->_hit_points = copy._hit_points;
	this->_energy_points = copy._energy_points;
	this->_attack_damage = copy._attack_damage;
	return *this;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << _name << "\t" << ClapTrap::_name << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}