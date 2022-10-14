#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string.h>
#include "Weapon.hpp"

class HumanA
{
private:
	HumanA();
	std::string _name;
	Weapon *_weapon;

public:
	HumanA(std::string const &name, Weapon &weapon);
	~HumanA();

void attack();
};

#endif