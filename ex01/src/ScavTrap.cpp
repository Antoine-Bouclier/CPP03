#include "ScavTrap.hpp"

/* -- Constructors -- */
ScavTrap::ScavTrap(): ClapTrap()
{
	this->_name = "Default";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << GREEN "ScavTrap: Default Constructor called." RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << GREEN "ScavTrap: Parameterized Constructor called." RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy)
{
	std::cout << GREEN "ScavTrap: Copy Constructor called." RESET << std::endl;
	*this = copy;
}

/* Destructor */
ScavTrap::~ScavTrap()
{
	std::cout << GREEN "ScavTrap: Destructor called." RESET << std::endl;
}

/* Assignement Operator */
ScavTrap& ScavTrap::operator=(const ScavTrap &src)
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_hitPoints = src._hitPoints;
		this->_energyPoints = src._energyPoints;
		this->_attackDamage = src._attackDamage;
	}
	std::cout << GREEN "ScavTrap: Assignation operator called." RESET << std::endl;
	return (*this);
}

void	ScavTrap::guardGate()
{
	std::cout << GREEN "ScavTrap: " << this->_name << " is now in gate keeper mode" RESET << std::endl;
}