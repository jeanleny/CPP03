#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{	
	private:
	std::string _name;
	static int	_hitPoints;
	static int	_energyPoints;
	static int	_attackDamage;

	public:
	std::string	getName();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const& obj);
	ClapTrap& operator=(ClapTrap const &rhs);
	~ClapTrap();
};

void	attack(const std::string& target);
void	takeDamage(unsigned int amount);
void	beRepaired(unsigned int amount);

#endif
