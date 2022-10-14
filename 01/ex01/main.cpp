#include "Zombie.hpp"

int main()
{
	Zombie *zombie1;
	zombie1 = zombieHorde(3, "Zombie");

	delete [] zombie1;
	return 0;
}