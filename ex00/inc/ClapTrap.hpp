#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;
public:
	/* -- Constructors -- */
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &copy);

	/* Destructor */
	~ClapTrap();

	/* -- Assignement Operator -- */
	ClapTrap& operator=(const ClapTrap &src);

	/*  */
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif