#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

#define BLUE "\033[34m"
#define RESET "\033[0m"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string	_name;
	public:
		/* -- Constructors -- */
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &copy);

		/* Destructor */
		~DiamondTrap();

		/* -- Assignement Operator -- */
		DiamondTrap& operator=(const DiamondTrap &src);

		void whoAmI();
};

#endif