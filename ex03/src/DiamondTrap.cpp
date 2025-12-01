#include "DiamondTrap.hpp"

/* -- Constructors -- */
DiamondTrap::DiamondTrap()
{
	this->_name = "Default";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = 50;
	this->_attackDamage = FragTrap::_attackDamage;
	this->ClapTrap::_name = this->_name + "_clap_name";
	std::cout << BLUE "DiamondTrap: Default Constructor called." RESET << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ScavTrap(name),  FragTrap(name)
{
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = 50;
	this->_attackDamage = FragTrap::_attackDamage;
	this->ClapTrap::_name = name + "_clap_name";
	std::cout << BLUE "DiamondTrap: Parameterized Constructor called." RESET << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy): ScavTrap(copy),  FragTrap(copy)
{
	std::cout << BLUE "DiamondTrap: Copy Constructor called." RESET << std::endl;
	*this = copy;
}

/* Destructor */
DiamondTrap::~DiamondTrap()
{
	std::cout << BLUE "DiamondTrap: Destructor called." RESET << std::endl;
}

/* Assignement Operator */
DiamondTrap& DiamondTrap::operator=(const DiamondTrap &src)
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_hitPoints = src._hitPoints;
		this->_energyPoints = src._energyPoints;
		this->_attackDamage = src._attackDamage;
	}
	std::cout << BLUE "DiamondTrap: Assignation operator called." RESET << std::endl;
	return (*this);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap named " << this->_name << "\nClapTrap named " << this->ClapTrap::_name << std::endl;
}