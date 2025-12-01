#include "DiamondTrap.hpp"

int main()
{
	// Test 1: Default constructor
	std::cout << "\n--- Test 1: Default Constructor ---\n";
	DiamondTrap dt1;
	dt1.whoAmI();

	// Test 2: Constructor with a name
	std::cout << "\n--- Test 2: Constructor with a Name ---\n";
	DiamondTrap dt2("DiamondTrap_Alex");
	dt2.whoAmI();

	// Test 3: Copy constructor
	std::cout << "\n--- Test 3: Copy Constructor ---\n";
	DiamondTrap dt3(dt2);  // Create via copy constructor
	dt3.whoAmI();

	// Test 4: Assignment operator
	std::cout << "\n--- Test 4: Assignment Operator ---\n";
	DiamondTrap dt4("DiamondTrap_Sophie");
	dt4 = dt2;  // Use the assignment operator
	dt4.whoAmI();

	// Test 5: Call inherited methods from ClapTrap, ScavTrap, and FragTrap
	std::cout << "\n--- Test 5: Call Inherited Methods ---\n";
	dt2.guardGate();
	dt2.highFivesGuys();
	
	// Test 6: Call the `attack()` method inherited from ClapTrap
	std::cout << "\n--- Test 6: Call the attack Method ---\n";
	dt2.attack("Enemy_Target");

	// Test 7: Call the `takeDamage()` method inherited from ClapTrap
	std::cout << "\n--- Test 7: Call the takeDamage Method ---\n";
	dt2.takeDamage(10);  // Simulate taking 10 damage
	dt2.whoAmI();

	// Test 8: Call the `beRepaired()` method inherited from ClapTrap
	std::cout << "\n--- Test 8: Call the beRepaired Method ---\n";
	dt2.beRepaired(20);  // Repair 20 hit points
	dt2.whoAmI();

	return 0;
}
