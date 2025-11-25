#include <ScavTrap.hpp>


ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& obj)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_name = obj._name;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
{
	std::cout << "Assignement operator called" << std::endl;
	if (this != &rhs)
	{
		this->ClapTrap::getName() = rhs.ClapTrap::getName();
		this->_hitPoints = rhs._hitPoints;
		this->_attackDamage = rhs._attackDamage;
		this->_energyPoints = rhs._energyPoints;
	}
	return (*this);
}
