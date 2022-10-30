#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_hit_points = 10;
	_energy_points = 10;
	_attack_damage = 0;
}

ClapTrap::~ClapTrap()
{
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
	*this = copy;
}
ClapTrap &ClapTrap::operator=(ClapTrap const &copy)
{
	if (this == &copy)
		return *this;
	this->_name = copy._name;
	this->_hit_points = copy._hit_points;
	this->_energy_points = copy._energy_points;
	this->_attack_damage = copy._attack_damage;
	return *this;
}
void ClapTrap::attack(const std::string &target)
{
	if (_energy_points > 0)
	{
		_energy_points--;
		std::cout << "ClapTrap " << _name << " attacks "
				<< target << ", causing " << _attack_damage
				<< " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap" << _name << "has no energy to attack" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	_hit_points -= amount;
	std::cout << "ClapTrap " << _name << " take damage "
			<< amount << ", current hit_points " << _hit_points  << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy_points > 0)
	{
		_energy_points--;
		_hit_points += amount;
		std::cout << "ClapTrap " << _name << " be repaired on "
				<< amount << ", current hit_points " << _hit_points  << std::endl;
	}
	else
		std::cout << "ClapTrap" << _name << "has no energy to repair" << std::endl;
}