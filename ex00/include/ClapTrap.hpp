#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{	
	private:
	std::string _name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;

	public:
	std::string	getName();
	unsigned int	getHitPoints();
	unsigned int	getEnergyPoints();
	unsigned int	getAttackDamage();
	void			setHitPoints(unsigned int amount);
	void			setEnergyPoints(unsigned int amount);
	void			setAttackDamage(unsigned int amount);
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const& obj);
	ClapTrap& operator=(ClapTrap const &rhs);
	~ClapTrap();
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif
