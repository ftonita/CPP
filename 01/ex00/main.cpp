#include "Zombie.hpp"

int	main(void)
{
	Zombie	z1;
	Zombie	*z2;

	randomChump("Lupa");
	z2 = newZombie("Pupa");
	delete z2;
	return (0);
}