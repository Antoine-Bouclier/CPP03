#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	a("Bertrand");
	ScavTrap	b("Bernard");
	ScavTrap	c = a;

	for (int i = 0; i < 12; i++)
	{
		a.attack("Bernard");
		b.takeDamage(20);
		b.beRepaired(12);
	}
	return (0);
}