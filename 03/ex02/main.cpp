#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap Hobbit("Hobbit");
	ClapTrap Mordor("Mordor");
	Hobbit.attack("Mordor");
	Mordor.takeDamage(2);
	Mordor.beRepaired(1);

	ScavTrap Hobbit2("Hobbit2");
	ScavTrap Mordor2("Mordor2");
	Hobbit2.attack("Mordor2");
	Mordor2.takeDamage(2);
	Mordor2.beRepaired(1);
	Hobbit2.guardGate();
	Mordor2.guardGate();

	FragTrap Hobbit3("Hobbit3");
	FragTrap Mordor3("Mordor3");
	Hobbit3.attack("Mordor3");
	Mordor3.takeDamage(2);
	Mordor3.beRepaired(1);
	Hobbit3.highFivesGuys();
	Mordor3.highFivesGuys();

	return 0;
}