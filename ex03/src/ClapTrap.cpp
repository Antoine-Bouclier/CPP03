#include "ClapTrap.hpp"

/* -- Constructors -- */
ClapTrap::ClapTrap(): _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(10) 
{
	std::cout << "Default Constructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(10)
{
	std::cout << "Parameterized Constructor called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "Copy Constructor called." << std::endl;
	*this = copy;
}

/* Destructor */
ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called." << std::endl;
}

/* Assignement Operator */
ClapTrap& ClapTrap::operator=(const ClapTrap &src)
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_hitPoints = src._hitPoints;
		this->_energyPoints = src._energyPoints;
		this->_attackDamage = src._attackDamage;
	}
	std::cout << "Assignation operator called." << std::endl;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints > 0)
	{
		this->_energyPoints--;
		std::cout
			<< "ClapTrap " << this->_name
			<< " attack " << target
			<< " causing " << this->_attackDamage
			<< " point of attackDamage." <<
		std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " can't attack" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints > amount)
	{
		this->_hitPoints -= amount;
		std::cout
			<< "ClapTrap " << this->_name
			<< " took " << amount
			<< " attackDamage." <<
		std::endl;
	}
	else
	{
		this->_hitPoints = 0;
		std::cout << this->_name << " is already dead." << std::endl;
	}
	std::cout << this->_hitPoints << " remaining."<< std::endl;
}
void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints > 0)
	{
		this->_energyPoints--;
		this->_hitPoints += amount;
		std::cout
			<< "ClapTrap " << this->_name
			<< " repairs " << amount
			<< " hit point " <<
		std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " can't repairs" << std::endl;
	std::cout
		<< "hitPoints: " << this->_hitPoints << " remaining.\n"
		<< "energyPoints: " << this->_energyPoints << " remaining." <<
	std::endl;
}