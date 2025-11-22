#include <ClapTrap.hpp>

int ClapTrap::_hitPoints = 10;

int	ClapTrap::_energyPoints = 10;

int ClapTrap::_attackDamage = 0;

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& obj)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_name = obj._name;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
{
	std::cout << "Assignement operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_attackDamage = rhs._attackDamage;
		this->_energyPoints = rhs._energyPoints;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

std::string ClapTrap::getName()
{
	return (_name);
}

void	attack(const std::string& target)
{
	(void)target;
}
