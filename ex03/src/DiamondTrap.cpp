#include <DiamondTrap.hpp>

DiamondTrap::DiamondTrap() : _name("Diamond default name")
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	_hitPoints = FragTrap::_hitPoints;
	setEnergyPoints(scavEnergyPoints);
	_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(std::string name) : _name(name)
{
	std::cout << "DiamondTrap argument constructor called" << std::endl;
	ClapTrap::_name = name + "_clap_name";
	setEnergyPoints(scavEnergyPoints);
	_hitPoints = FragTrap::_hitPoints;
	_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(DiamondTrap const& obj)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	ClapTrap::_name = obj._name + "_clap_name";
	_hitPoints = obj.FragTrap::_hitPoints;
	setEnergyPoints(scavEnergyPoints);
	_attackDamage = obj.FragTrap::_attackDamage;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Diamond destructor Called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &rhs)
{
	std::cout << "DiamondTrap Assignement operator called" << std::endl;
	if (this != &rhs)
		ClapTrap::operator=(rhs);
	return (*this);
}

void	DiamondTrap::whoAmi()
{
	std::cout << "DiamondName : " << _name << std::endl;
	std::cout << "ClapTrap Name : " << ClapTrap::_name << std::endl;
}
