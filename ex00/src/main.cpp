#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	a("Bertrand");
	ClapTrap	b("Bernard");
	ClapTrap	c = a;

	for (int i = 0; i < 12; i++)
	{
		a.attack("Bernard");
		b.takeDamage(10);
		b.beRepaired(12);
	}
	return (0);
}