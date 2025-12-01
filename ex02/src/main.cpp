#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	a("Bertrand");
	FragTrap	b("Bernard");
	FragTrap	c = a;

	for (int i = 0; i < 12; i++)
	{
		a.attack("Bernard");
		b.takeDamage(30);
		b.beRepaired(12);
	}
	a.highFivesGuys();
	return (0);
}