#include "FragTrap.hpp"

/* -- Constructors -- */
FragTrap::FragTrap(): ClapTrap()
{
	this->_name = "Default";
	this->_health = 100;
	this->_energy = 50;
	this->_damage = 20;
	std::cout << RED "FragTrap: Default Constructor called." RESET << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->_name = name;
	this->_health = 100;
	this->_energy = 100;
	this->_damage = 30;
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
		this->_health = src._health;
		this->_energy = src._energy;
		this->_damage = src._damage;
	}
	std::cout << RED "FragTrap: Assignation operator called." RESET << std::endl;
	return (*this);
}

void	FragTrap::highFivesGuys()
{
	std::cout << RED "FragTrap: " << this->_name << " request a high-fives!" RESET << std::endl;
}