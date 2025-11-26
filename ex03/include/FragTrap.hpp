#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <ClapTrap.hpp>

class FragTrap : public virtual ClapTrap
{
	public :
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const& obj);
	FragTrap& operator=(FragTrap const &rhs);
	~FragTrap();
	void	highFiveGuys();

	private:
};

#endif
