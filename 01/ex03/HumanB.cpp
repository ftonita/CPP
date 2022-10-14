#include "HumanB.hpp"

HumanB::HumanB(std::string const &name)
{
	_name = name;
	_weapon = nullptr;
}

HumanB::~HumanB()
{

}

void HumanB::attack()
{
	if (_weapon == nullptr)
		return;
	std::cout << _name <<  " attacks with their " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}