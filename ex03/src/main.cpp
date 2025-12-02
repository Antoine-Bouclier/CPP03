#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap	a("Bernard");
	DiamondTrap	b("Bertrand");
	DiamondTrap	c = a;

	std::cout << "\n-- Attack --\n";
	a.attack("Bertrand");
	std::cout << "\n-- be repaired --\n";
	a.beRepaired(15);
	std::cout << "\n-- gate keeper --\n";
	a.guardGate();
	std::cout << "\n-- High Fives Guys --\n";
	a.highFivesGuys();
	std::cout << "\n-- take Damage: --\n";
	a.takeDamage(15);
	std::cout << "\n-- Who Am I ? --\n";
	a.whoAmI();
	std::cout << std::endl;

	return 0;
}
