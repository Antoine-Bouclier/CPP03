#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	a("Bertrand");
	FragTrap	b("Bernard");
	FragTrap	c = a;

	std::cout << "\n-- Attack --\n";
	a.attack("Bertrand");
	std::cout << "\n-- be repaired --\n";
	a.beRepaired(15);
	std::cout << "\n-- High Fives Guys --\n";
	a.highFivesGuys();
	std::cout << "\n-- take Damage: --\n";
	a.takeDamage(15);
	std::cout << std::endl;
	return (0);
}