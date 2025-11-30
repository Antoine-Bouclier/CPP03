#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

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