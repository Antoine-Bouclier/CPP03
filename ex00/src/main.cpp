#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	a("Bertrand");
	ClapTrap	b("Bernard");
	ClapTrap	c = a;

	std::cout << "\n-- TEST 1 --\n";
	std::cout << "\n-- take Damage: --\n";
	a.takeDamage(15);
	std::cout << "\n-- be repaired --\n";
	a.beRepaired(15);
	std::cout << std::endl;

	std::cout << "\n-- TEST 2 --\n";
	std::cout << "\n-- Attack --\n";
	b.attack("Bertrand");
	std::cout << "\n-- be repaired --\n";
	b.beRepaired(15);
	std::cout << "\n-- take Damage: --\n";
	b.takeDamage(15);
	std::cout << std::endl;
	return (0);
}