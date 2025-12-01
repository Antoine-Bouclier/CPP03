#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

#define GREEN "\033[32m"
#define RESET "\033[0m"

class ScavTrap : public ClapTrap
{
	private:
		/* data */
	public:
		/* -- Constructors -- */
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &copy);

		/* Destructor */
		~ScavTrap();

		/* -- Assignement Operator -- */
		ScavTrap& operator=(const ScavTrap &src);

		void	guardGate();
};

#endif