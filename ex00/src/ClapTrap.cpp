#include <ClapTrap.hpp>

ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Agument constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& obj) : _name(obj._name), _hitPoints(obj._hitPoints), _energyPoints(obj._energyPoints), _attackDamage(obj._attackDamage)
{
	std::cout << "Copy constructor called" << std::endl;
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

unsigned int ClapTrap::getHitPoints() const
{
	return (_hitPoints);
}

unsigned int ClapTrap::getEnergyPoints() const

{
	return (_energyPoints);
}

unsigned int ClapTrap::getAttackDamage() const

{
	return (_attackDamage);
}

void	ClapTrap::setAttackDamage(unsigned int amount)
{
	this->_attackDamage = amount;
}

void	ClapTrap::setHitPoints(unsigned int amount)
{
	this->_hitPoints = amount;
}

void	ClapTrap::setEnergyPoints(unsigned int amount)
{
	this->_energyPoints = amount;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attack " << target << ", causing " << _attackDamage << " points of damage !" << std::endl;
		this->_energyPoints--;
	}
	else
		std::cout << "ClapTrap can't attack" << std::endl;

}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints > 0)
	{
		if (amount > this->_hitPoints)
			amount = this->_hitPoints;
		std::cout << "ClapTrap " << this->_name << " takes " << amount << " damage !" << std::endl;
		this->_hitPoints -= amount;
	}
	else
		std::cout << this->_name << " is already dead." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " repaired himself " << amount << " hit points." << std::endl;
		if (amount > 4294967295 - _hitPoints)
			_hitPoints = 4294967295;
		else
			this->_hitPoints += amount;
		this->_energyPoints--;
	}
	else
		std::cout << "ClapTrap " << this->_name << " is exhausted " << std::endl;
}
