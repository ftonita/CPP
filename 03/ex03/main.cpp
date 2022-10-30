#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

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
	Mordor3.takeDamage(25);
	Mordor3.beRepaired(33);
	Hobbit3.highFivesGuys();
	Mordor3.highFivesGuys();

	DiamondTrap Hobbit4("Hobbit4");
	DiamondTrap Mordor4("Mordor4");
	Hobbit4.attack("Mordor4");
	Mordor4.takeDamage(10);
	Mordor4.beRepaired(15);
	Hobbit4.whoAmI();
	Mordor4.whoAmI();

	return 0;
}