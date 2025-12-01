#include "FragTrap.hpp"

/* -- Constructors -- */
FragTrap::FragTrap(): ClapTrap()
{
	this->_name = "Default";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << RED "FragTrap: Default Constructor called." RESET << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << RED "FragTrap: Parameterized Constructor called." RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy)
{
	std::cout << RED "FragTrap: Copy Constructor called." RESET << std::endl;
	*this = copy;
}

/* Destructor */
FragTrap::~FragTrap()
{
	std::cout << RED "FragTrap: Destructor called." RESET << std::endl;
}

/* Assignement Operator */
FragTrap& FragTrap::operator=(const FragTrap &src)
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_hitPoints = src._hitPoints;
		this->_energyPoints = src._energyPoints;
		this->_attackDamage = src._attackDamage;
	}
	std::cout << RED "FragTrap: Assignation operator called." RESET << std::endl;
	return (*this);
}

void	FragTrap::highFivesGuys()
{
	std::cout << RED "FragTrap: " << this->_name << " request a high-fives!" RESET << std::endl;
}