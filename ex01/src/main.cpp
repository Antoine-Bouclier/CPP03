#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	a("Bertrand");
	ScavTrap	b("Bernard");
	ScavTrap	c = a;

	std::cout << "\n-- Attack --\n";
	a.attack("Bertrand");
	std::cout << "\n-- be repaired --\n";
	a.beRepaired(15);
	std::cout << "\n-- gate Keeper --\n";
	a.guardGate();
	std::cout << "\n-- take Damage: --\n";
	a.takeDamage(15);
	std::cout << std::endl;
	return (0);
}