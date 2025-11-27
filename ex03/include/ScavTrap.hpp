#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <ClapTrap.hpp>

class ScavTrap : public virtual ClapTrap
{
	public :
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const& obj);
	ScavTrap& operator=(ScavTrap const &rhs);
	~ScavTrap();
	void			guardGate(void);
	void			attack(const std::string& target);
	unsigned int	scavEnergyPoints;

	private :
};

#endif
