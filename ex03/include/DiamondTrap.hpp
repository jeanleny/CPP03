#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <FragTrap.hpp>
#include <ScavTrap.hpp>

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const& obj);
	DiamondTrap& operator=(DiamondTrap const &rhs);
	~DiamondTrap();
	void	whoAmi();
	private:
	std::string _name;
};

#endif
