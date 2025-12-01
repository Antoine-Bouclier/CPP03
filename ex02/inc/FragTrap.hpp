#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

#define RED "\033[31m"
#define RESET "\033[0m"

class FragTrap : public ClapTrap
{
	private:
		/* data */
	public:
		/* -- Constructors -- */
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &copy);

		/* Destructor */
		~FragTrap();

		/* -- Assignement Operator -- */
		FragTrap& operator=(const FragTrap &src);

		void	highFivesGuys();
};

#endif