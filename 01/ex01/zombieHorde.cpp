#include "Zombie.hpp"
#include <string.h>

Zombie *zombieHorde(int n, std::string name)
{
	Zombie	*arr = new Zombie[n];
	std::string	u_name;

	for (int i = 0; i < n; i++)
	{
		arr[i].setName(name);
		arr[i].announce();
	}

	return arr;
}