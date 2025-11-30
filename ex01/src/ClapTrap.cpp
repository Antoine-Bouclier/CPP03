#include "ClapTrap.hpp"

/* -- Constructors -- */
ClapTrap::ClapTrap(): _name("Default"), _health(100), _energy(50), _damage(20)
{
	std::cout << "ClapTrap: Default Constructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name),  _health(100), _energy(50), _damage(20) 
{
	std::cout << "ClapTrap: Parameterized Constructor called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "ClapTrap: Copy Constructor called." << std::endl;
	*this = copy;
}

/* Destructor */
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap: Destructor called." << std::endl;
}

/* Assignement Operator */
ClapTrap& ClapTrap::operator=(const ClapTrap &src)
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_health = src._health;
		this->_energy = src._energy;
		this->_damage = src._damage;
	}
	std::cout << "ClapTrap: Assignation operator called." << std::endl;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energy > 0)
	{
		this->_energy--;
		std::cout
			<< "ClapTrap " << this->_name
			<< " attack " << target
			<< " causing " << this->_damage
			<< " point of damage." <<
		std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " can't attack" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_health > amount)
	{
		this->_health -= amount;
		std::cout
			<< "ClapTrap " << this->_name
			<< " took " << amount
			<< " damage." <<
		std::endl;
	}
	else
	{
		this->_health = 0;
		std::cout << this->_name << " is already dead." << std::endl;
	}
	std::cout << this->_health << " remaining."<< std::endl;
}
void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy > 0)
	{
		this->_energy--;
		this->_health += amount;
		std::cout
			<< "ClapTrap " << this->_name
			<< " repairs " << amount
			<< " hit point " <<
		std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " can't repairs" << std::endl;
	std::cout
		<< "health: " << this->_health << " remaining.\n"
		<< "energy: " << this->_energy << " remaining." <<
	std::endl;
}