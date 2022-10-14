#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string.h>
#include "Weapon.hpp"

class HumanB
{
private:
	HumanB();
	std::string _name;
	Weapon *_weapon;

public:
	HumanB(std::string const &name);
	~HumanB();

void attack();
void setWeapon(Weapon &weapon);
};

#endif