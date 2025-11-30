#include "ScavTrap.hpp"

/* -- Constructors -- */
ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap: Default Constructor called." << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap: Parameterized Constructor called." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	std::cout << "ScavTrap: Copy Constructor called." << std::endl;
	*this = copy;
}

/* Destructor */
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap: Destructor called." << std::endl;
}

/* Assignement Operator */
ScavTrap& ScavTrap::operator=(const ScavTrap &src)
{
	if (this != &src)
	{
		
	}
	return (*this);
}