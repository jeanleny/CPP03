#include <FragTrap.hpp>

FragTrap::FragTrap() : ClapTrap("FragTrap default")
{
	std::cout << "FragTrap default constructor called" << std::endl;
	_attackDamage = 30;
	_energyPoints = 100;
	_hitPoints = 100;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap argument constructor called" << std::endl;
	_attackDamage = 30;
	_energyPoints = 100;
	_hitPoints = 100;
}

FragTrap::FragTrap(FragTrap const& obj): ClapTrap(obj)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &rhs)
{
	std::cout << "FragTrap Assignement operator called" << std::endl;
	if (this != &rhs)
		ClapTrap::operator=(rhs);
	return (*this);
}

void	FragTrap::highFiveGuys()
{
	std::cout << _name << " : Give me five !" << std::endl;
}
