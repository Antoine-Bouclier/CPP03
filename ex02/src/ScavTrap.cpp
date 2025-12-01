#include "ScavTrap.hpp"

/* -- Constructors -- */
ScavTrap::ScavTrap(): ClapTrap()
{
	this->_name = "Default";
	this->_health = 100;
	this->_energy = 50;
	this->_damage = 20;
	std::cout << GREEN "ScavTrap: Default Constructor called." RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->_name = name;
	this->_health = 100;
	this->_energy = 50;
	this->_damage = 20;
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
		this->_health = src._health;
		this->_energy = src._energy;
		this->_damage = src._damage;
	}
	std::cout << GREEN "ScavTrap: Assignation operator called." RESET << std::endl;
	return (*this);
}

void	ScavTrap::guardGate()
{
	std::cout << GREEN "ScavTrap: " << this->_name << " is now in gate keeper mode" RESET << std::endl;
}